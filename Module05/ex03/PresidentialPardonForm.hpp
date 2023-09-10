#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm const &P);
        PresidentialPardonForm& operator=(PresidentialPardonForm const P);
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
};

#endif