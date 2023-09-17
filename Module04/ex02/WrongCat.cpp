#include "WrongCat.hpp"

void WrongCat::makeSound() const
{
    std::cout << "Cat sound !" << std::endl;
}

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called !" << std::endl;
    type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat& wrongcat)
{
    *this = wrongcat;
}

WrongCat& WrongCat::operator = (const WrongCat& wrongcat)
{
    this->type = wrongcat.type;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called !" << std::endl;
};
