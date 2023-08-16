#include "AMateria.hpp"

AMateria::AMateria(){};

void AMateria::use(ICharacter& target)
{
   std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
};
AMateria::~AMateria(){};

AMateria::AMateria(std::string const & type)
{
    this->type = type;
};

std::string const & AMateria::getType() const
{
    return type;
};