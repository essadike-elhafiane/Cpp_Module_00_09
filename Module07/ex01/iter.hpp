#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>
#include <stdlib.h>

template <typename T,typename Size, typename Fun>

void iter(const T *address, const Size &size, const Fun &function)
{
    for (Size i = 0; i < size; i++)
        function(address[i]);
}

#endif