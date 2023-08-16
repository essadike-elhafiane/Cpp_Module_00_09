#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void f()
{
    system("leaks animal");
}
int main()
{
    // const AAnimal* meta = new AAnimal();
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
    Cat a;
    Cat b;
    a = b;
    atexit(f);
    return 0;
}
