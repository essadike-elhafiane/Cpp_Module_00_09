#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain *ideas;
    public:
        void makeSound() const;
        Cat();
        Cat(const Cat& cat);
        Cat& operator = (const Cat& Cat);
        ~Cat();
};

#endif
