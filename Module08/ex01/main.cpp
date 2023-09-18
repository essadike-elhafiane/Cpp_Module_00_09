#include "Span.hpp"

int main()
{
    Span sp = Span(6);
    try
    {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const char * s)
    {
        std::cerr << s << '\n';
    }
    
    return 0;
}