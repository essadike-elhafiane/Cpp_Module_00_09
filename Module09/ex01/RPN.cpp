#include "RPN.hpp"

RPN::RPN(/* args */)
{
    numpush = 0;
}

RPN::~RPN()
{
}

RPN::RPN(const RPN& R)
{
    *this = R;
}
RPN& RPN::operator=(const RPN& P)
{
    numpush = P.numpush;
    s = P.s;
    return *this;
}
void RPN::addNumber(int value)
{
    numpush++;
    s.push(value);
}
int RPN::getNumber()
{
    int value = s.top();
    s.pop();
    return value;
}
size_t RPN::size()
{
    return s.size();
}
int RPN::getNumbepush()
{
    return numpush;
}

