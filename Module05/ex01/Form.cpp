#include "Form.hpp"


Form::GradeTooHighException::GradeTooHighException(){};

const char *Form::GradeTooHighException::what() const _NOEXCEPT
{
    return ("highest possible grade");
}

Form::GradeTooLowException::GradeTooLowException(){};

const char *Form::GradeTooLowException::what() const _NOEXCEPT
{
    return ("lowest possible grade");
}

void Form::beSigned(Bureaucrat &Br)
{
    if (Br.getGrade() > this->grade_sign)
        throw GradeTooLowException();
    this->is_signd = true;
};

Form::Form(): name(""), is_signd(false), grade_sign(150), grade_exe(150) {};

Form::Form(std::string name, bool is_signd,  const int grade_sign, const int grade_exe):
name(name), is_signd(is_signd), grade_sign(grade_sign), grade_exe(grade_exe){

};

Form& Form::operator = (const Form& form){
    if(this != &form)
    {
        this->is_signd = form.is_signd;
    }
    return(*this);
};

Form::Form(const Form& form):name(form.name), is_signd(form.is_signd),
grade_sign(form.is_signd),grade_exe(form.grade_exe){

};

std::ostream& operator << (std::ostream& os, Form& b)
{
    os << "Form name " << b.getName() << ", singnd status "<< std::boolalpha << b.getSingndStatus() << ", grade required to sign it " << b.getGradeSing() << ", grade required to execute it " << b.getGradeExe();
    return(os);
}

std::string Form::getName()
{
    return name;
};

int Form::getGradeSing()
{
    return grade_sign;
}

int Form::getGradeExe()
{
    return grade_exe;
}

bool Form::getSingndStatus()
{
    return is_signd;
}

Form::~Form(){};
