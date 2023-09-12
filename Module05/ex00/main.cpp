#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("bob", 1);
        b.Gradedecrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // Bureaucrat a(b);
    // std::cout << a;
}