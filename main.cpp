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
    get_member_from_t(t,"b",[](auto& x){
       std::cout<<x<<std::endl;
        x = 1024.56;
    });
    std::cout<<t.b<<std::endl;
    return 0;
}