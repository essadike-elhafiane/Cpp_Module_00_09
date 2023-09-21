#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> s;
        int numpush;
    public:
        RPN(/* args */);
        RPN(const RPN& R);
        RPN& operator=(const RPN& P);
        void addNumber(int value);
        int getNumber();
        size_t size();
        int getNumbepush();
        ~RPN();
};



#endif
