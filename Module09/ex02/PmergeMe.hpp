#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <stdio.h>

class PmergeMe
{
    private:
        std::vector<unsigned int> vect;
    public:
        PmergeMe(/* args */);
        ~PmergeMe();

        void    addNumber(std::string s)
        {
            for (size_t i = 0; i < s.size(); i++)
                if (!isdigit(s[i]) && s[i] != ' ')
                    throw "Error: is not digit !";
            double value = atof(s.c_str());
            if (4294967295 < value)
                throw "Error number to large";
            vect.push_back((unsigned int)value);
            std::cout<< ":" << s << ":" << std::endl;
        }

        void print()
        {
            
            for (size_t i = 0; i < vect.size(); i++)
            {
                std::cout << vect[i] << " ";
            }
            std::cout << std::endl;
            
        }
};



#endif