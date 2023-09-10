#include "Cure.hpp"

Cure::Cure():AMateria("cure"){};

Cure::Cure(const Cure& cr)
{
    this->type = cr.type;
}

Cure& Cure::operator=(const Cure& cr)
{
    this->type = cr.type;
    return(*this);
}

AMateria* Cure::clone() const
{
    return new Cure;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals "<< target.getName() << " \'s wounds *" << std::endl;
}

Cure::~Cure(){};
