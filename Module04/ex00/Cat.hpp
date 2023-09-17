#ifndef CAT_HPP
#define CAT_HPP


#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat: public Animal{
    public:
        void makeSound() const;
        Cat();
        Cat(const Cat& cat);
        Cat& operator = (const Cat& Cat);
        ~Cat();
};

#endif
