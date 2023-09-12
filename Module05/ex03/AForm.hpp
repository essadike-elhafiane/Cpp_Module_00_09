#ifndef AForm_HPP
# define AForm_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
    private:
        std::string const name;
        bool is_signd;
        const int grade_sign;
        const int grade_exe;
    public:
        AForm(std::string const name, bool is_signd,  const int grade_sign, const int grade_exe);
        AForm();
        AForm(AForm const &AForm);
        AForm& operator = (AForm const &AForm);
        virtual ~AForm();
        class GradeTooHighException: public std::exception{
            public:
                GradeTooHighException();
                const char *what() const throw();
        };
        class GradeTooLowException: public std::exception{
            public:
                GradeTooLowException();
                const char *what() const throw();
        };
        void beSigned(Bureaucrat &Br);
        std::string getName() const;
        int getGradeSing() const;
        int getGradeExe() const;
        bool getSingndStatus() const;
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator << (std::ostream& os, AForm& b);
#endif