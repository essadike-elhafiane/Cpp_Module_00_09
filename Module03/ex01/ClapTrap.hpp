#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int Hit_points;
        int Energy_points;
        int Attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap& cl);
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap& cl);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);   
        std::string getname();
};



#endif