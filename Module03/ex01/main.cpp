#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Scavvy");
    ClapTrap f("mm");
    f.attack("hh");
    scav.attack("Enemy");
    scav.takeDamage(5);
    scav.beRepaired(3);
    scav.attack("Enemy");
    scav.attack("Enemy");
    scav.takeDamage(20);
    scav.guardGate();
    return 0;
}