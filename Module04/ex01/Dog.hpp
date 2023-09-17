#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
        Brain *ideas;
    public:
        void makeSound() const;
        Dog();
        Dog(const Dog & dog);
        Dog& operator = (const Dog& dog);
        ~Dog();
};

#endif
