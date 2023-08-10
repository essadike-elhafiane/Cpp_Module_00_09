#ifndef FILE_HPP
#define FILE_HPP


#include <iostream>
#include <string>

#include "characters.hpp"
#include "AMateria.hpp"





class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource: public IMateriaSource{
    private:
        AMateria* inventory[4];
    public:
        MateriaSource (){
            for(int i = 0; i < 4; i++)
                inventory[i] = nullptr;
        };
        void learnMateria(AMateria* m)
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

        AMateria* createMateria(std::string const & type)
        {
            for(int i = 0; i < 4; i++)
            {
                if(inventory[i] != nullptr && inventory[i]->getType() == type)
                    return inventory[i]->clone();
            }
            return 0;
        }

        ~MateriaSource(){
            for (int i = 0; i < 4; i++)
            {  
                if (inventory[i] != nullptr)
                    delete inventory[i];
            }
        };
};

class Ice: public AMateria{

    public:
        Ice():AMateria("ice"){};
        // Ice(Ice& ice) {
        //     this->type = ice.getType();
        // };
        AMateria* clone() const
        {
            return new Ice;
        }
        void use(ICharacter& target){
            std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
        }
        ~Ice(){};
};

class Cure: public AMateria{
    public:
        Cure():AMateria("cure")
        {

        };
        AMateria* clone() const
        {
            return new Cure;
        }
        void use(ICharacter& target){
            std::cout << "* heals "<< target.getName() << " \'s wounds *" << std::endl;
        }
        ~Cure(){};
};

#endif
