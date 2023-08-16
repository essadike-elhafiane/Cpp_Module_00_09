#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongAnimal();
    const WrongAnimal* C = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    w->makeSound();
    C->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;
    delete w;
    delete C;
    system("leaks animal");
    return 0;
}