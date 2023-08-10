#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("Clappy");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.attack("Enemy");
    clap.attack("Enemy");
    clap.takeDamage(20);
    return 0;
}