#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& S);
        ShrubberyCreationForm&  operator =(ShrubberyCreationForm const& S);
        ~ShrubberyCreationForm();
        std::string   getTarget() const;
        void execute(Bureaucrat const & executor) const;
};

#endif