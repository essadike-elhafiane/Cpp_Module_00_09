#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP
#include <stack>
#include <iostream>
#include <string>
#include <deque>
template <typename T>
class MutantStack: public std::stack<T>
{
    private:
        /* data */
    public:
        typedef typename std::deque<T>::iterator iterator;
        MutantStack(/* args */)
        {
            
        };
        ~MutantStack()
        {

        };
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};

// MutantStack::MutantStack(/* args */)
// {
// }

// MutantStack::~MutantStack()
// {
// }


#endif