#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include <string>

class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal();
        virtual void makeSound() const = 0;
        std::string getType() const;
        void setType(std::string type);
        AAnimal& operator=(const AAnimal& An);
        AAnimal(const AAnimal& An);
        virtual~AAnimal();
};

#endif