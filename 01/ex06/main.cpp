#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return(std::cout << "Error arg !" << std::endl, 1);
    Harl harl;
    harl.complain(av[1]);
}
