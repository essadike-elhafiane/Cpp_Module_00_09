#include "Intern.hpp"

Intern::Intern(Intern const& I)
{
    *this = I;
}

Intern& Intern::operator=(Intern const& I)
{
    (void)I;
    return (*this);
}

AForm* Intern::makeForm(std::string const nameForm, std::string const target)
{
    AForm* F;
    int i = 0;

    std::string AForms[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    AForm* (Intern::*frms[3])(const std::string) = {&Intern::makeFormR, &Intern::makeFormP, &Intern::makeFormS };
    while(i < 3 && AForms[i] != nameForm)
        i++;
    if (i == 3)
        throw "Error Form not fond !";
    F = (this->*frms[i])(target);
    std::cout << "Intern creates " << F->getName() << std::endl;
    return (F);
}

AForm* Intern::makeFormR(std::string const target)
{
    return  new RobotomyRequestForm(target);
}

AForm* Intern::makeFormP(std::string const target)
{
    return  new PresidentialPardonForm(target);
}

AForm* Intern::makeFormS(std::string const target)
{
    return new ShrubberyCreationForm(target);
}

Intern::Intern()
{
}

Intern::~Intern()
{
}
