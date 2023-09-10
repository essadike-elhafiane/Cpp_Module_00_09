#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include <string>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        std::string getType() const;
        void setType(std::string type);
        Animal& operator=(const Animal& An);
        Animal(const Animal& An);
        virtual void makeSound() const;
        virtual~Animal();
};

#endif