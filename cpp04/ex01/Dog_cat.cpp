#include "Poly.hpp"

/*class dog*/
 void Dog::makeSound() const
{
    std::cout << "kkkkkkk" << std::endl;
}

Dog::Dog()
{
    ideas = new Brain();
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
    delete ideas;
};

/*class cats*/

void Cat::makeSound() const
{
    std::cout << "momomoom" << std::endl;
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
    this->type = Cat.type;
    return (*this);
}

Cat::~Cat(){
    delete ideas;
};