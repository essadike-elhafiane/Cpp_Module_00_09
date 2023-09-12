#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& _name, int _grade): name(_name){
    if (_grade > 150)
        throw GradeTooLowException();
    if (_grade < 1)
        throw GradeTooHighException();
    grade = _grade;
};

Bureaucrat::GradeTooHighException::GradeTooHighException(){};

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("highest possible grade");
}

Bureaucrat::GradeTooLowException::GradeTooLowException(){};

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("lowest possible grade");
}

const std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void   Bureaucrat::Gradeincrement()
{ 
    if (grade - 1 < 1)
        throw GradeTooHighException(); 
    grade -= 1;
}

void   Bureaucrat::Gradedecrement()
{
    if (grade + 1 > 150)
        throw GradeTooLowException();
    grade += 1;
}

Bureaucrat::~Bureaucrat(){};

Bureaucrat::Bureaucrat(): name("null")
{
    grade = 150;
};

Bureaucrat::Bureaucrat(const Bureaucrat &b):name(b.name)
{
    grade = b.grade;
};

Bureaucrat& Bureaucrat::operator = (const Bureaucrat& b)
{
    if (this != &b)
    {
        grade = b.grade;
    }
    return (*this);
};

std::ostream& operator << (std::ostream& os, Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return(os);
}

void Bureaucrat::signForm(AForm &form)
{
    if (form.getSingndStatus())
        std::cout << this->name << " signed " << form.getName() << std::endl;
    else
        std::cout << this->name << " couldn’t sign " << form.getName() << " because His grade is low" << std::endl; 
}

void Bureaucrat::executeForm(AForm const &form)
{
   try
   {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
   }
   catch(const std::exception& e)
   {
        std::cerr << e.what() << '\n';
   }
}
