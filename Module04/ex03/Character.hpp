#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter{
    private:
        std::string name;
        AMateria* inventory[4];
        AMateria* garbge[4];
    public:
        Character();
        Character(const Character& cr);
        Character(const std::string& name);
        Character& operator = (const Character& cr);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif