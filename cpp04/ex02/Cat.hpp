#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal{
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
