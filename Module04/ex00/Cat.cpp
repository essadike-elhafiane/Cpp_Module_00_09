#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Cat sound !" << std::endl;
}

Cat::Cat()
{
    std::cout << "Cat constructor called !" << std::endl;
    type = "cat";
}
Cat::Cat(const Cat& cat)
{
    *this = cat;
}

Cat& Cat::operator = (const Cat& Cat)
{
    this->type = Cat.type;
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called !" << std::endl;
};
