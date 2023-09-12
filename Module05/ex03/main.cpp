#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat b("bob", 40);
    // AForm f("ff", false, 10, 10);
    ShrubberyCreationForm f("simo");
    AForm* rrf;
    RobotomyRequestForm   r("hh");
    PresidentialPardonForm P("pre");
    try
    {
        Intern someRandomIntern;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        // b.Gradedecrement();
        
        (rrf)->beSigned(b);
        rrf->execute(b);
        // b.signAForm(f);

        std::cout << f << std::endl ;
        std::cout << *rrf << std::endl;
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
    catch(const char* str)
    {
        std::cerr << str << std::endl;
        return 1;
    }
    delete rrf;
    
}