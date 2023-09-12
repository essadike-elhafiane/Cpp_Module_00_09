#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

#include "Form.hpp"

class Form;
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
                const char *what() const throw();
        };

        class GradeTooLowException: public std::exception{
            public:
                GradeTooLowException();
                const char *what() const throw();
        };
        const std::string getName();
        int getGrade();
        void   Gradeincrement();
        void   Gradedecrement();
        void    signForm(Form &form);
        ~Bureaucrat();
};

std::ostream& operator << (std::ostream& os, Bureaucrat& b);

#endif