#ifndef INTERN_HPP
# define INTERN_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(Intern const& I);
        Intern& operator=(Intern const& I);
        ~Intern();
        AForm* makeFormR(std::string const target);
        AForm* makeFormP(std::string const target);
        AForm* makeFormS(std::string const target);
        AForm* makeForm(std::string const nameForm, std::string const target);
};

#endif