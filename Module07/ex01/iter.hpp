#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>
#include <stdlib.h>

template <typename T, typename Fun>

void iter(const T *address, size_t size, const Fun &function)
{
    for (size_t i = 0; i < size; i++)
        function(address[i]);
}

#endif