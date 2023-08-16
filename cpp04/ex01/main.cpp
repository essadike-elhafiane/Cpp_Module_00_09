#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// void f()
// {
//     system("leaks animal");
// }
int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    // atexit(f);
    delete meta;
    delete j;
    delete i;
    return 0;
}