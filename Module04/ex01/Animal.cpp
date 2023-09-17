#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called !" << std::endl;
    type = "Animal";
}

std::string Animal::getType() const
{
    return type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound !" << std::endl;
}

Animal& Animal::operator=(const Animal& An)
{
    this->type = An.type;
    return (*this);
}

Animal::Animal(const Animal& An)
{
    *this = An;
}

Animal::~Animal(){
    std::cout << "Animal destructor called !" << std::endl;
};
