#include "Span.hpp"

int main()
{
    Span sp = Span(10);
    try
    {
        sp.addNumber(-1);
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