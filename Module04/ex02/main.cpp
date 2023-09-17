#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // const AAnimal* meta = new AAnimal();
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
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
