#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <stdlib.h>

template<typename T, size_t size>
class Array
{
    private:
        T arr[size];
    public:
        ~Array()
        {
            
        }
        Array(/* args */)
        {
                arr[0];
        }
        Array(unsigned int n)
        {
            arr[n];
            for (size_t i = 0; i < n; i++)
                arr[n] = 1;
        }
};


#endif