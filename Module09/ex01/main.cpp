#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cout << "Error: bad arguments !" << std::endl, 1);
    RPN s;
    for (size_t i = 0; av[1][i]; i++)
    {
        if (av[1][i] == ' ')
            continue;
        if (isdigit(av[1][i]))
            s.addNumber(std::atoi(av[1] + i));
        else
        {
            const char operatorr[4] = {'*', '/', '-', '+'};
            int j = -1;
            while(++j < 5)
            { 
                if (j >= 4)
                    return (std::cout << "Error: opeartor not found" << std::endl, 1);
                if (av[1][i] == operatorr[j])
                    break; 
            }
            if (s.size() < 2)
               return( std::cout << "Error " << std::endl, 1);
            int top = s.getNumber();
            int down_top = s.getNumber();
            int value = 0;
            switch (j)
            {
                case 0:
                    value = down_top * top;
                    break;
                case 1:
                    value = down_top / top;
                    break;
                case 2:
                    value = down_top - top;
                    break;
                case 3:
                    value = down_top + top;
                    break;
                default:
                    break;
            }
            s.addNumber(value);
        }
    }
    if (s.size() != 1 || s.getNumbepush() < 2)
        return( std::cout << "Error " << std::endl, 1);
    std::cout << s.getNumber() << std::endl;
}