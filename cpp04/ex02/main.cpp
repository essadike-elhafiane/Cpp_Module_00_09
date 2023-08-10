#include "Poly.hpp"

int main()
{
    // const AAnimal* meta = new Animal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    // atexit(v);
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    // meta->makeSound();
    
    // delete meta;
    delete j;
    delete i;
    return 0;
}