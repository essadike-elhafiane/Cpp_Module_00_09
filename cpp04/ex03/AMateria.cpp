#include "AMateria.hpp"


void AMateria::use(ICharacter& target)
{

};
AMateria::~AMateria(){};

AMateria::AMateria(std::string const & type)
{
    this->type = type;
};

std::string const & AMateria::getType() const{
    return type;
};