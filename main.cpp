#include <iostream>
#include "reflection.hpp"
struct Test
{
    int a;
    float b;
};
Produce(Test,a,b)
int main()
{
    Test t;
    t.a = 10;
    t.b = 20.1;
    auto res = reflect_function(t);
    auto tuple = res.get_member_addr();
    auto arr = res.get_member_str_arr();
    int a;
//    std::cout<<arr[0]<<std::endl;
//    std::cout<<(t.*std::get<0>(tuple))<<std::endl;
//    std::cout<<has_reflect<int>::value<<std::endl;
    get_member(t,"b",[&t](auto x){
        std::cout<<(t.*x)<<std::endl;
    });
    return 0;
}