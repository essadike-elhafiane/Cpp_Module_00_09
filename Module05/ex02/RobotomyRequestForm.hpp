#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include <random>
#include <ctime>
#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm const &R);
        RobotomyRequestForm& operator=(RobotomyRequestForm const &R);
        RobotomyRequestForm(const std::string target);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const & executor) const;
};

#endif