#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        void makeSound() const;
        WrongCat();
        WrongCat(const WrongCat& wrongcat);
        WrongCat& operator = (const WrongCat& wrongcat);
        ~WrongCat();
};

#endif