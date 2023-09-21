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
        void addNumber(int value)
        {
            numpush++;
            s.push(value);
        }
        int getNumber()
        {
            int value = s.top();
            s.pop();
            return value;
        }
        size_t size()
        {
            return s.size();
        }
        int getNumbepush()
        {
            return numpush;
        }
        ~RPN();
};



#endif
