#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    Bureaucrat b("bob", 50);
    // AForm f("ff", false, 10, 10);
    ShrubberyCreationForm f("simo");
    RobotomyRequestForm   r("hh");
    PresidentialPardonForm P("pre");
    try
    {
        // b.Gradedecrement();
        // b.signAForm(f);
        std::cout << f << std::endl ;
        std::cout << P << std::endl ;
        // b.Gradeincrement();
        // b.beSigned(b);
        r.beSigned(b);
        f.beSigned(b);
        // b.signAForm(f);
        f.execute(b);
        r.execute(b);
        std::cout << r << std::endl ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}