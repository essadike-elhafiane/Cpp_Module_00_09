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
        MutantStack(/* args */){};
        ~MutantStack(){};
        MutantStack(const MutantStack& M)
        {
            *this = M;
        }
        MutantStack& operator=(const MutantStack& M)
        {
            this->c = M.c;
            return *this;
        }
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
        iterator rbegin()
        {
            return this->c.begin();
        }
        iterator rend()
        {
            return this->c.end();
        }
        const_iterator begin() const
        {
            return this->c.begin();
        }
        const_iterator end() const
        {
            return this->c.end();
        }
        const_iterator rbegin() const
        {
            return this->c.rbegin();
        }
        const_iterator rend() const
        {
            return this->c.rend();
        }
};

#endif