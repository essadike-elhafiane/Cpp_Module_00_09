#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try
    {
        Bureaucrat b("bob", 11);
        Form f("ff", false, 10, 10);
        // b.Gradedecrement();
        b.signForm(f);
        b.Gradeincrement();
        f.beSigned(b);
        b.signForm(f);
        std::cout << f << std::endl ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}