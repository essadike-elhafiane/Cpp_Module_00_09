#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource{
    private:
        AMateria* inventory[4];
    public:
        MateriaSource ();
        MateriaSource(const MateriaSource& cr);
        MateriaSource& operator = (const MateriaSource& cr);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
        ~MateriaSource();
};

#endif