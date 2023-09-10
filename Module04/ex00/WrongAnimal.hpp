#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP


#include <iostream>
#include <string>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        std::string getType() const;
        void setType(std::string type);
        WrongAnimal& operator=(const WrongAnimal& An);
        WrongAnimal(const WrongAnimal& An);
        void makeSound() const;
        ~WrongAnimal();
};

#endif