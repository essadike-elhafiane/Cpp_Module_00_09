#include "AForm.hpp"

AForm::GradeTooHighException::GradeTooHighException(){};

const char *AForm::GradeTooHighException::what() const _NOEXCEPT
{
    return ("highest possible grade");
}

AForm::GradeTooLowException::GradeTooLowException(){};

const char *AForm::GradeTooLowException::what() const _NOEXCEPT
{
    return ("lowest possible grade");
}

void AForm::beSigned(Bureaucrat &Br)
{
    if (Br.getGrade() > this->grade_sign)
        throw GradeTooLowException();
    this->is_signd = true;
};

AForm::AForm(): name(""), is_signd(false), grade_sign(150), grade_exe(150) {};

AForm::AForm(std::string name, bool is_signd,  const int grade_sign, const int grade_exe):
name(name), is_signd(is_signd), grade_sign(grade_sign), grade_exe(grade_exe){

};

AForm& AForm::operator = (const AForm& AForm){
    if(this != &AForm)
    {
        this->is_signd = AForm.is_signd;
    }
    return(*this);
};

AForm::AForm(const AForm& AForm):name(AForm.name), is_signd(AForm.is_signd),
grade_sign(AForm.is_signd),grade_exe(AForm.grade_exe){

};

std::ostream& operator << (std::ostream& os, AForm& b)
{
    os << "AForm name " << b.getName() << ", singnd status "<< std::boolalpha << b.getSingndStatus() << ", grade required to sign it " << b.getGradeSing() << ", grade required to execute it " << b.getGradeExe();
    return(os);
}

std::string AForm::getName() const
{
    return name;
};

int AForm::getGradeSing() const
{
    return grade_sign;
}

int AForm::getGradeExe() const
{
    return grade_exe;
}

bool AForm::getSingndStatus() const
{
    return is_signd;
}

AForm::~AForm(){};
