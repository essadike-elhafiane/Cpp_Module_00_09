#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{   if (Energy_points <= 0 || Hit_points <= 0)
    {
        std::cout << "ClapTrap " << Name << " has 0 point in Energy" << std::endl;
        return ;
    }
    this->Energy_points--;
    std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points <= 0)
    {   
        std::cout << "ClapTrap " << Name << " has 0 Hit_points, is died !" << std::endl;
        return ;
    }
    this->Hit_points -= amount;
    std::cout << "ClapTrap " << Name << " take " << amount << " of damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->Hit_points += amount;
    Energy_points--;
    std::cout << "ClapTrap " << Name << " is repaired for " <<  amount << " hit point and lose 1 energy" << std::endl;
}

ClapTrap::ClapTrap()
{
    Name = "null";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "ClapTrap has been created !" << std::endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    this->Name = Name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "ClapTrap " << Name << " has been created !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& cl)
{
    this->Name = cl.Name;
    this->Hit_points = cl.Hit_points;
    this->Energy_points = cl.Energy_points;
    this->Attack_damage = cl.Attack_damage;
}

std::string ClapTrap::getname()
{
    return (Name);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << Name << " has been destroyed !" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& cl)
{
    this->Name = cl.Name;
    this->Hit_points = cl.Hit_points;
    this->Energy_points = cl.Energy_points;
    this->Attack_damage = cl.Attack_damage;
    return *this;
}
