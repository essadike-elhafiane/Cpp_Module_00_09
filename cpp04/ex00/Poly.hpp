
#ifndef POLY_HPP
#define POLY_HPP


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

class Dog: public Animal{
    public:
        void makeSound() const;
        Dog();
        Dog(const Dog & dog);
        Dog& operator = (const Dog& dog);
        ~Dog();
};

class Cat: public Animal{
    public:
        void makeSound() const;
        Cat();
        Cat(const Cat& cat);
        Cat& operator = (const Cat& Cat);
        ~Cat();
};

#endif