#include "PmergeMe.hpp"


int main(int ac, char **av)
{   
    if (ac <= 1)
        return 0;
    std::string s;
    PmergeMe Pm;
    for (size_t i = 1; av[i]; i++)
        s = s + av[i] + " ";
    size_t last_pos = 0;
    try
    {
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' || s[i] == '\t' || i < last_pos)
                continue;
            size_t pos = s.find(' ', i);
            if (pos == s.npos)
                pos = s.size();
            Pm.addNumber(s.substr(i, pos - last_pos));
            last_pos = pos;
        }
        Pm.merge();
    }
    catch(const char *s)
    {
        std::cerr << s << '\n';
    }
    
}
