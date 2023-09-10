#include "Dog.hpp"

 void Dog::makeSound() const
{
    std::cout << "Dog sound !" << std::endl;
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
    for (int i = 0; i < 100; i++)
        this->ideas[i] = dog.ideas[i];
    this->type = dog.type;
    return (*this);
}

Dog::~Dog(){
    delete ideas;
};
