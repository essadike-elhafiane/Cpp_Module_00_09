#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void v()
{
    system("leaks Interface");
}
int main()
{
    atexit(v);
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    AMateria* tmp1 = new Ice();
    tmp = src->createMateria("ice");
    me->equip(tmp);
    me->equip(tmp1);
    delete tmp1;
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    // me->unequip(0);
    // me->unequip(1);
    // me->unequip(3);
    me->use(0, *bob);
    me->use(2, *bob);
    me->use(1, *bob);
    me->use(4, *bob);
    delete bob;
    delete me;
    delete src;
    delete tmp;
    // while (1)
    // {
    //     /* code */
    // }
    
    system("leaks Interface");
    return 0;
}