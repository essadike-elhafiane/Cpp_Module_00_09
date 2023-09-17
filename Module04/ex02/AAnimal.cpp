#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor called !" << std::endl;
    type = "AAnimal";
}

std::string AAnimal::getType() const
{
    return type;
}

void AAnimal::setType(std::string type)
{
    this->type = type;
}

AAnimal& AAnimal::operator=(const AAnimal& An)
{
    this->type = An.type;
    return (*this);
}

AAnimal::AAnimal(const AAnimal& An)
{
    *this = An;
}

AAnimal::~AAnimal(){
    std::cout << "AAnimal destructor called !" << std::endl;
};
