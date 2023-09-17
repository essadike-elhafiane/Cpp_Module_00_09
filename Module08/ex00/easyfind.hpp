#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

template <typename T>
size_t easyfind(T& container, int value)
{
    for (size_t i = 0; i < container.size(); i++)
        if(container[i] == value)
            return i;
    
    throw "Error element not found !";
}

#endif