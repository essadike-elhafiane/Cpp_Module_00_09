#include "Span.hpp"

int main()
{
    Span sp = Span(10);
    try
    {
        sp.addNumber(-1);
        sp.addNumber(-111);
        sp.addNumber(-1102);
        sp.addNumber(-100);
        sp.addNumber(-110);
        // sp.print();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        
    }
    catch(const char * s)
    {
        std::cerr << s << '\n';
    }
    
    return 0;
}