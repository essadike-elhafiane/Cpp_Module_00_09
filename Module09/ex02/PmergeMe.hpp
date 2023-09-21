#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>
#include <deque>

class PmergeMe
{
    private:
        std::vector<unsigned int> vect;
        std::deque<unsigned int> deq;
    public:
        PmergeMe(/* args */);
        ~PmergeMe();
        PmergeMe(const PmergeMe* Pm);
        PmergeMe& operator = (const PmergeMe& Pm);
        void    addNumber(std::string s);
        void print();
};

#endif