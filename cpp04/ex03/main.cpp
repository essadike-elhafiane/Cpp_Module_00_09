#include "file.hpp"
#include "AMateria.hpp"
#include "characters.hpp"
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
    tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    delete tmp;
    // while (1)
    // {
    //     /* code */
    // }
    
    // system("leaks Interface");
    return 0;
}