#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>


class A;
class B;
class C;
class Base
{
    public:
        virtual~Base();
};
void identify(Base* p);

void identify(Base& p);

Base * generate(void);

#endif