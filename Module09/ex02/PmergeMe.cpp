#include "PmergeMe.hpp"

void    PmergeMe::addNumber(std::string s)
{
    for (size_t i = 0; i < s.size(); i++)
        if (!isdigit(s[i]) && s[i] != ' ')
            throw "Error: is not digit !";
    double value = atof(s.c_str());
    if (INT_MAX < value)
        throw "Error number to large";
    vect.push_back((int)value);
    deq.push_back((int)value);
}

void PmergeMe::print()
{

    for (size_t i = 0; i < vect.size(); i++)
    {
        std::cout << vect[i] << " ";
    }
    std::cout << std::endl;
    std::cout<< "deque:   ";
    for (size_t i = 0; i < deq.size(); i++)
    {
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;   
}

PmergeMe::PmergeMe(/* args */)
{

}

PmergeMe::~PmergeMe()
{
}
PmergeMe::PmergeMe(const PmergeMe* Pm)
{
    *this = Pm;
}
PmergeMe& PmergeMe::operator = (const PmergeMe& Pm)
{
    vect = Pm.vect;
    deq = Pm.deq;
    return *this;
}
