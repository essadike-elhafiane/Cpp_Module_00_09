#include "characters.hpp"


Character::Character(){
    name = "null";
    for(int i = 0; i < 4; i++)
        inventory[i] = nullptr;
};

Character::Character(const std::string& name){
    this->name = name;
    for(int i = 0; i < 4; i++)
        inventory[i] = nullptr;
};

Character& Character::operator = (const Character& cr)
{
    name = cr.getName();
    for (int i = 0; i < 4; i++)
        this->inventory[i] = cr.inventory[i];
    return (*this);
};

Character::~Character(){
    for (int i = 0; i < 4; i++)
        if (inventory[i] != nullptr)
            delete inventory[i];
};

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    int i = 0;
    while (i < 4)
    {
        if(inventory[i] == nullptr)
            break;
        i++;
    }
    if(i < 4)
        inventory[i] = m->clone();
    // delete m;
}

void Character::unequip(int idx)
{
    if(idx < 4)
        inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx < 4 && inventory[idx] != nullptr)
        inventory[idx]->use(target);
}