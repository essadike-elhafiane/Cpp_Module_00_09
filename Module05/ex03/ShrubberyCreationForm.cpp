#include "ShrubberyCreationForm.hpp"


std::string   ShrubberyCreationForm::getTarget() const
{
    return (target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& S):AForm(S.getName(), S.getSingndStatus(), S.getGradeSing(), S.getGradeExe())
{
    target = S.getTarget();
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator =(ShrubberyCreationForm const& S)
{
    if (this != &S)
    {
        target = S.getTarget();
    }
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGradeExe() && getSingndStatus())
    {
        std::ofstream fd_out(target + "_shrubbery");
        if (fd_out.is_open())
        {
            fd_out << "        *\n";
            fd_out << "       ***\n";
            fd_out << "      *****\n";
            fd_out << "     *******\n";
            fd_out << "    *********\n";
            fd_out << "   ***********\n";
            fd_out << "  *************\n";
            fd_out << " ***************\n";
            fd_out << "*****************\n";
            fd_out << "       ||||\n";
            fd_out << "       ||||\n";
        }
        fd_out.close();
    }
    else
        throw GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm():AForm("Shrubbery", false, 145, 137), target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):AForm("Shrubbery", false, 145, 137), target(target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}