#include "MateriaSource.hpp"

MateriaSource::MateriaSource (){
    for(int i = 0; i < 4; i++)
        inventory[i] = nullptr;
};

MateriaSource::MateriaSource(const MateriaSource& cr)
{
    *this = cr;
};

MateriaSource& MateriaSource::operator = (const MateriaSource& cr)
{
    for (int i = 0; i < 4; i++)
        this->inventory[i] = cr.inventory[i]->clone();
    return (*this);
};

void MateriaSource::learnMateria(AMateria* m)
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
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(inventory[i] != nullptr && inventory[i]->getType() == type)
            return inventory[i]->clone();
    }
    return 0;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
    {  
        if (inventory[i] != nullptr)
            delete inventory[i];
    }
};
