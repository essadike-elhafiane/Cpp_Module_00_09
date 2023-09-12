#include "ScalarConverter.hpp"

int main(int argc, char const *argv[])
{   
    if (argc == 2)
    {
        try {
            ScalarConverter a;
            a.convert(std::string(argv[1]));
            std::cout << a ;
        }
        catch(const char* s)
        {
            std::cout << s << std::endl;
        }
    }
    return 0;
}
