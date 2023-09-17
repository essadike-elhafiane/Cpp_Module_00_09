#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor called !" << std::endl;
};

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

Brain::~Brain(){
    std::cout << "Brain destructor called !" << std::endl;
};
