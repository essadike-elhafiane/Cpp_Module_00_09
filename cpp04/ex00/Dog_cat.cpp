#include "Poly.hpp"

/*class dog*/
 void Dog::makeSound() const
{
    std::cout << "kkkkkkk" << std::endl;
}

Dog::Dog()
{
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
Dog::~Dog(){};

/*class cats*/

void Cat::makeSound() const
{
    std::cout << "momomoom" << std::endl;
}

Cat::Cat()
{
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

Cat::~Cat(){};