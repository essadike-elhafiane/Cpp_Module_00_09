#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <stdlib.h>

template<typename T>
class Array
{
    private:
        T *arr;
        size_t _size;
    public:
        Array()
        {
                arr = NULL;
                _size = 0;
        }

        Array(unsigned int n)
        {
            arr = new T[n];
            T *def = new T();
            for (size_t i = 0; i < n; i++)
                arr[i] = *def;
            _size = n;
            delete def;
        }

        Array(const Array& Arr)
        {
            *this = Arr;
        }

        Array& operator=(const Array& Arr) 
        {
            if (this != &Arr)
            {
                delete[] arr;
                arr = NULL;
                if (Arr._size)
                {
                    arr = new T[Arr.size()];
                    for (size_t i = 0; i < Arr.size(); i++)
                        arr[i] = Arr.arr[i];
                }
                _size = Arr.size();
            }
            return *this;
        }

        ~Array()
        {
             delete[] arr;
        }

        T& operator[] (size_t size) const
        {
            if (size < 0 || size >= _size)
                throw "Error out of range !";
            return arr[size];
        }

        size_t size() const
        {
            return _size;
        }

};


#endif