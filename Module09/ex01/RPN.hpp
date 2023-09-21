#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> s;
    public:
        RPN(/* args */);
        void addNumber(int value)
        {
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
        ~RPN();
};



#endif
