#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        std::string const name;
        bool is_signd;
        const int grade_sign;
        const int grade_exe;
        Form();
        Form(std::string const name, bool is_signd,  const int grade_sign, const int grade_exe);
    public:
        Form(const Form& form);
        Form& operator = (const Form& form);
        ~Form();
        class GradeTooHighException: public std::exception{
            public:
                GradeTooHighException();
                const char *what() const _NOEXCEPT;
        };
        class GradeTooLowException: public std::exception{
            public:
                GradeTooLowException();
                const char *what() const _NOEXCEPT;
        };
        void beSigned(Bureaucrat &Br);
        std::string getName();
        int getGradeSing();
        int getGradeExe();
        bool getSingndStatus();
};

std::ostream& operator << (std::ostream& os, Form& b);
#endif