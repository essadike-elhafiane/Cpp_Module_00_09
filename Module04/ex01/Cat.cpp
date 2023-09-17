#include "Cat.hpp"

void Cat::makeSound() const
{
    std::cout << "Cat sound !" << std::endl;
}

Cat::Cat()
{
    std::cout << "Cat constructor called !" << std::endl;
    ideas = new Brain();
    type = "cat";
}

Cat::Cat(const Cat& cat)
{
    ideas = nullptr;
    if (cat.ideas) {
        ideas = new Brain(*cat.ideas);
    }
    this->type = cat.type;
}

Cat& Cat::operator = (const Cat& Cat)
{
    if (this != &Cat) {
        delete ideas;
        ideas = nullptr;
        if (Cat.ideas){
            ideas = new Brain(*Cat.ideas);
        }
        this->type = Cat.type;
    }
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat destructor called !" << std::endl;
    delete ideas;
};

