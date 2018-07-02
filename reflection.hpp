//
// Created by dy2018 on 18-7-2.
//

#ifndef UNTITLED51_REFLECTION_HPP_HPP
#define UNTITLED51_REFLECTION_HPP_HPP
#include <array>
#include <string>
#include <tuple>
#include <assert.h>
#define MARCO_EXPAND(...) __VA_ARGS__
#define parmas_place() 5,4,3,2,1,0
#define get_args_(_1,_2,_3,_4,_5,N,...) N
#define get_args_count_help(...) get_args_(__VA_ARGS__)
#define get_args_count(...) get_args_count_help(__VA_ARGS__,parmas_place())

#define concat_A_B_help(A,B) A##_##B
#define concat_A_B(A,B) concat_A_B_help(A,B)

#define create_member_addr_1(STRUCT_NAME,element,...) &STRUCT_NAME::element
#define create_member_addr_2(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_1(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_3(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_2(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_4(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_3(STRUCT_NAME,__VA_ARGS__))
#define create_member_addr_5(STRUCT_NAME,element,...) &STRUCT_NAME::element,MARCO_EXPAND(create_member_addr_4(STRUCT_NAME,__VA_ARGS__))

#define create_member_str_1(element,...) std::string(#element)
#define create_member_str_2(element,...) std::string(#element),MARCO_EXPAND(create_member_str_1(__VA_ARGS__))
#define create_member_str_3(element,...) std::string(#element),MARCO_EXPAND(create_member_str_2(__VA_ARGS__))
#define create_member_str_4(element,...) std::string(#element),MARCO_EXPAND(create_member_str_3(__VA_ARGS__))
#define create_member_str_5(element,...) std::string(#element),MARCO_EXPAND(create_member_str_4(__VA_ARGS__))

#define Produce(STRUCT_NAME,...) \
static std::array<std::string,get_args_count(__VA_ARGS__)> STRUCT_NAME##_##arr = {concat_A_B(create_member_str,get_args_count(__VA_ARGS__))(__VA_ARGS__)}; \
auto reflect_function(const STRUCT_NAME&) \
{ \
    struct struct_meta_info_ \
    { \
           auto get_member_addr() \
           { \
                 return  std::make_tuple(concat_A_B(create_member_addr,get_args_count(__VA_ARGS__))(STRUCT_NAME,__VA_ARGS__));            \
           } \
                     \
           auto get_member_str_arr() \
           { \
                return  STRUCT_NAME##_##arr;           \
           }               \
    }; \
    return struct_meta_info_{}; \
}

template<typename T,typename U = void>
struct has_reflect
{
    static const bool value = false;
};

template<typename T>
struct has_reflect<T,std::void_t<decltype(reflect_function(std::declval<T>()))>>
{
    static const bool value = true;
};

template<typename Class,typename F>
std::enable_if_t<has_reflect<typename std::remove_reference<Class>::type>::value,void> get_member(Class&& obj,const std::string& member_name,F&& lambda)
{
     auto meta_info = reflect_function(obj);
      auto members_str = meta_info.get_member_str_arr();
     for(int i=0;i<members_str.size();i++){
         if(members_str[i] == member_name){
             each_tuple(i,meta_info.get_member_addr(),std::forward<F>(lambda));
             break;
         }
     }
}
template<typename Class,typename F>
std::enable_if_t<!has_reflect<typename std::remove_reference<Class>::type>::value,void> get_member(Class&& obj,const std::string& member_name,F&& lambda)
{
   assert(false);
};
template<int Index,typename F,typename T,typename...Args>
void dynamic_each_tuple(int find_index,const std::tuple<T,Args...>& tuple,F&& lambda)
{
    if(find_index==Index)
    {
        lambda(std::get<T>(tuple));
    }
    dynamic_each_tuple<Index+1>(find_index,std::make_tuple(std::get<Args>(tuple)...),std::forward<F>(lambda));
}

template<int Index,typename F,typename T>
void dynamic_each_tuple(int find_index,const std::tuple<T>& tuple,F&& lambda)
{
    if(find_index==Index)
    {
        lambda(std::get<T>(tuple));
    }
};
template<typename Tuple,typename F>
void each_tuple(int find_index,const Tuple& t,F&& lambda)
{
    dynamic_each_tuple<0>(find_index,t,std::forward<F>(lambda));
};
#endif //UNTITLED51_REFLECTION_HPP_HPP
