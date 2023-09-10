#ifndef BRAIM_HPP
#define BRAIM_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& br);
        Brain& operator = (const Brain& br);
        ~Brain();
};

#endif