#include "include/Base.hpp"
#include "include/A.hpp"
#include "include/C.hpp"
#include "include/B.hpp"

Base::~Base()
{
}
void identify(Base* p)
{
    A *AA = dynamic_cast<A*>(p);
    C *CC = dynamic_cast<C*>(p);
    B *BB = dynamic_cast<B*>(p);
    if (AA != NULL)
        std::cout << "pointer A" << std::endl;
    if (BB != NULL)
        std::cout << "pointer B" << std::endl;
    if (CC != NULL)
        std::cout << "pointer C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A  &AA = dynamic_cast<A&>(p);
        (void)AA;
        std::cout << "reference  A" << std::endl;
    }
    catch(...)
    {
        
    }
    try
    {
        C &CC = dynamic_cast<C&>(p);
        (void)CC;
        std::cout << "reference  C" << std::endl;

    }
    catch(...)
    {
        
    }
    try
    {
        B &BB = dynamic_cast<B&>(p);
        (void)BB;
        std::cout << "reference  B" << std::endl;
        
    }
    catch(...)
    {
        
    }
}

Base * generate(void)
{   
    srand(time(0));
    int i = rand() % 3;
    if (i == 0)
    {    
        return new A;
    }
    if (i == 1)
    {    
        B  *BB = new B();
        return reinterpret_cast<Base*>(BB);
    }
    else
    {    
        C *CC = new C();
        return reinterpret_cast<Base*>(CC);
    }
}

C::C(/* args */)
{
}

C::~C()
{
}

B::B()
{
}

B::~B()
{
}

A::A(/* args */)
{
}

A::~A()
{
}
