#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

template <typename T>
int easyfind(T& container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
        return std::distance(container.begin(), std::find(container.begin(), container.end(), value));
    throw "Error element not found !";
}

#endif