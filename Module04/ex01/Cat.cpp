#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Cat sound !" << std::endl;
}

Cat::Cat()
{
    ideas = new Brain();
    type = "cat";
}
Cat::Cat(const Cat& cat)
{
    *this = cat;
}

Cat& Cat::operator = (const Cat& Cat)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = Cat.ideas[i];
    this->type = Cat.type;
    return (*this);
}

Cat::~Cat(){
    delete ideas;
};
