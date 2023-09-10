#include "FragTrap.hpp"

FragTrap::FragTrap(const FragTrap& Frag)
{
    *this = Frag;
}

FragTrap& FragTrap::operator = (const FragTrap &Frag)
{
    this->Name = Frag.Name;
    this->Hit_points = Frag.Hit_points;
    this->Energy_points = Frag.Energy_points;
    this->Attack_damage = Frag.Attack_damage;
    return (*this);
}

FragTrap::FragTrap(std::string name)
{
    Name = name;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << "\033[1;33mFragTrap\033[0m " << Name << " has been created!" << std::endl;
}

FragTrap::FragTrap()
{
    std::cout << "\033[1;33mFragTrap\033[0m " << Name << " default constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "\033[1;33mFragTrap\033[0m " << Name << " has been destroyed !" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "\033[1;33mFragTrap\033[0m " << Name << " want to high fives " << std::endl;
}
