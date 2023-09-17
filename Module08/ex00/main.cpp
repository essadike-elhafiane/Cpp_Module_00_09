#include "easyfind.hpp"

int main()
{
    std::vector<int> s(10, 0);
    s[0] = 255;
    s[1] = 255;
    std::cout << easyfind(s, 255) << std::endl;
}