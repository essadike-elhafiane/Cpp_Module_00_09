#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &R):AForm(R.getName(), R.getSingndStatus(), R.getGradeSing(), R.getGradeExe())
{
    target = R.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &R)
{
    if (this != &R)
    {
        target = R.target;
    }
    return *this;
}   
        
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->getGradeExe() && getSingndStatus())
    {
        srand((unsigned int)(time(0)));
        int random_number = rand() % 2;
        if (random_number)
            std::cout << target << " has been robotomized" << std::endl;
        else
            std::cout << "the robotomy failed !" << std::endl;
    }
    else
        throw GradeTooLowException();
}

RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequest", false, 72, 45), target("")
{
}
RobotomyRequestForm::RobotomyRequestForm(const std::string target):AForm("RobotomyRequest", false, 72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
