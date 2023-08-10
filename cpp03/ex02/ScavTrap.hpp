#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        void guardGate(void);
        ScavTrap(std::string name);
        ScavTrap();
        ScavTrap(const ScavTrap & Scav);
        ScavTrap& operator = (const ScavTrap &scav);
        void attack(const std::string& target);
        ~ScavTrap();
};

#endif