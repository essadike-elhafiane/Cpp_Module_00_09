#include "Brain.hpp"

Brain::Brain(){};

Brain::Brain(const Brain& br){
    for (int i = 0; i < 100; i++)
        this->ideas[i] = br.ideas[i];
};

Brain& Brain::operator = (const Brain& br)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = br.ideas[i];
    return (*this);
}

Brain::~Brain(){};
