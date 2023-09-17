#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called !" << std::endl;
    type = "WrongAnimal";
}

std::string WrongAnimal::getType() const
{
    return type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound !" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& An)
{
    this->type = An.type;
    return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& An)
{
    *this = An;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called !" << std::endl;
};

