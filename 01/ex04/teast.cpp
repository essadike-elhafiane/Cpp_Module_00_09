
#include <iostream>
#include <string.h>
#include <fstream>

int main(int ac, char ** av)
{
    if (ac < 4 || ac > 4)
        return (std::cout << "Error arg !" << std::endl, 1);
    std::ifstream fd(av[1]);
    if (!fd.is_open())
        return (std::cerr << "Error: could not open infile" << std::endl, 1);
    std::ofstream out_fd(std::string(av[1]) + ".replace");
   if (!fd.is_open())
        return (std::cerr << "Error: could not open outfile" << std::endl, 1);
    std::string str;
    while (std::getline(fd, str))
    {
        int flg = 0;
        for (int i = 0; str[i]; i++)
        {
            std::size_t pos = str.find(av[2]);
            if (pos != std::string::npos)
                flg = 1;
            while (i < pos && str[i] && pos != std::string::npos)
                out_fd << str[i++];
                
            while (pos != std::string::npos)
            {
                if (i == pos && str[i])
                {
                    for (int j = 0; j < std::string(av[2]).length(); j++)
                    {
                        if (str[i])
                            i++;
                    }
                    out_fd << av[3];
                }
                pos = str.find(av[2], pos + std::string(av[2]).length());
                while (i < pos && pos != std::string::npos && str[i])
                    out_fd << str[i++];
            }
            if (str[i] && !flg)
                out_fd << str[i];
        }
        out_fd << std::endl;
    }
    fd.close();
    out_fd.close();
}
