#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap scav("Scavvy");
    FragTrap f("sdf");
    FragTrap c("sdf");
    FragTrap b("sdf");
    f.attack("hello !!");
    f.beRepaired(10);
    scav.attack("Enemy");
    scav.takeDamage(5);
    scav.beRepaired(3);
    scav.attack("Enemy");
    scav.attack("Enemy");
    scav.takeDamage(20);
    scav.guardGate();
    return 0;
}