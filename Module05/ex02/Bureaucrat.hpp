#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;
class  Bureaucrat
{
    private: 
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &b);
        Bureaucrat& operator = (const Bureaucrat &b);
        Bureaucrat(const std::string& _name, int _grade);
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
        const std::string getName() const;
        int getGrade() const;
        void   Gradeincrement();
        void   Gradedecrement();
        void    signForm(AForm &AForm);
        void executeForm(AForm const & AForm);
        ~Bureaucrat();
};

std::ostream& operator << (std::ostream& os, Bureaucrat& b);

#endif
