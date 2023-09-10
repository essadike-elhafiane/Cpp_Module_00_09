#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{
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
