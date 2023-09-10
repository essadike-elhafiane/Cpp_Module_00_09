#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("bob", 150);
    try
    {
        b.Gradedecrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    Bureaucrat a(b);
    std::cout << a;
}