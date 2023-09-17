#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria{
    public:
        Cure();
        Cure(const Cure& cr);
        Cure& operator=(const Cure& cr);
        AMateria* clone() const;
        void use(ICharacter& target);
        ~Cure();
};

#endif