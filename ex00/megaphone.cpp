#include <iostream>

int main(int ac, char **av)
{

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; av[i]; i++)
        {
            for (int j = 0; av[i][j]; j++)
            {
                if (islower(av[i][j]))
                    std::cout << (char)toupper(av[i][j]);
                else
                    std::cout << (char)av[i][j];
            }
        }
        std::cout<<std::endl;
    }
    return 0;
}
