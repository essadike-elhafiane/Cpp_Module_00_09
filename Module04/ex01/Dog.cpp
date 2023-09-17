#include "Dog.hpp"

 void Dog::makeSound() const
{
    std::cout << "Dog sound !" << std::endl;
}

Dog::Dog()
{
    std::cout << "Dog constructor called !" << std::endl;
    ideas = new Brain();
    type = "dog";
}

Dog::Dog(const Dog & dog)
{
    ideas = nullptr;
    if (dog.ideas) {
        ideas = new Brain(*dog.ideas);
    }
    this->type = dog.type;
}
Dog& Dog::operator = (const Dog& dog)
{
    if (this != &dog) {
        delete ideas;
        ideas = nullptr;
        if (dog.ideas){
            ideas = new Brain(*dog.ideas);
        }
        this->type = dog.type;
    }
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called !" << std::endl;
    delete ideas;
};
