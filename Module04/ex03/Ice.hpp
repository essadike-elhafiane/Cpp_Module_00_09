#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria{

    public:
        Ice();
        Ice(const Ice& cr);
        Ice& operator=(const Ice& cr);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Ice();
};

#endif