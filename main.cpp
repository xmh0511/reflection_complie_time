#include <iostream>
#include "reflection.hpp"
#include <typeinfo>
struct Test
{
    int a;
    float b;
};
reflection(Test,a,b);

int main()
{
    Test t;
    t.a = 10;
    t.b = 20.1;
    auto res = reflect_function(t);
    auto tuple = res.get_member_addr();
    auto arr = res.get_member_str_arr();
    int a;
    get_member(t,"b",[&t](auto x){
        std::cout<<(t.*x)<<std::endl;
    });

    return 0;
}