
#ifndef POLY_HPP
#define POLY_HPP


#include <iostream>
#include <string>

class AAnimal{
    protected:
        std::string TType;
    public:
        virtual void makeSound() const = 0;
        std::string getType() const{
            return (TType);
        }
        AAnimal(){};
        virtual~AAnimal(){};
};

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


class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(){};
        ~Brain(){};
};

class Dog: public Animal, public AAnimal{
    private:
        Brain *ideas;
    public:
        void makeSound() const;
        Dog();
        Dog(const Dog & dog);
        Dog& operator = (const Dog& dog);
        ~Dog();
};

class Cat: public Animal, public AAnimal{
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