#include "easyfind.hpp"
#include<map>
#include <set>

int main()
{
    std::vector<int> s(10, 0);

    std::set<int> SS;
    SS.insert(255);
    // s[0] = 255;
    s[9] = 255;
    std::cout << easyfind(s, 255) << std::endl;
    std::cout << easyfind(SS, 255) << std::endl;
}