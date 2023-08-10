#include "ScavTrap.hpp"

void ScavTrap::guardGate(void)
{
    std::cout << "\033[31mScavTrap\033[0m " << Name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::ScavTrap()
{
    Name = "null";
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "\033[31mScavTrap\033[0m " << Name << " has been created !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & Scav)
{
    *this = Scav;
}

ScavTrap& ScavTrap::operator = (const ScavTrap &scav)
{
    this->Name = scav.Name;
    this->Hit_points = scav.Hit_points;
    this->Energy_points = scav.Energy_points;
    this->Attack_damage = scav.Attack_damage;
    return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
    Name = name;
    Hit_points = 100;
    Energy_points = 50;
    Attack_damage = 20;
    std::cout << "\033[31mScavTrap\033[0m " << Name << " has been created !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "\033[31mScavTrap\033[0m " << Name << " has been destroyed !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{   if (Energy_points <= 0 || Hit_points <= 0)
    {
        std::cout << "\033[31mScavTrap\033[0m " << Name << " has 0 point in Energy" << std::endl;
        return ;
    }
    this->Energy_points--;
    std::cout << "\033[31mScavTrap\033[0m " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}