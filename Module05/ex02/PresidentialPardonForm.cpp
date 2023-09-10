#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &P):AForm(P.getName(), P.getSingndStatus(), P.getGradeSing(), P.getGradeExe())
{
    target = P.target;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const P)
{
    if (this != &P)
        target = P.target;
    return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGradeExe() && getSingndStatus())
    {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        throw GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm():AForm("PresidentialPardon", false, 25, 5), target("")
{
}
PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardon", false, 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
