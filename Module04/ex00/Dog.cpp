#include "Dog.hpp"

void Dog::makeSound() const
{
    std::cout << "Dog sound !" << std::endl;
}

Dog::Dog()
{
    std::cout << "Dog constructor called !" << std::endl;
    type = "dog";
}

Dog::Dog(const Dog & dog)
{
    *this = dog;
}

Dog& Dog::operator = (const Dog& dog)
{
    this->type = dog.type;
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called !" << std::endl;
};
