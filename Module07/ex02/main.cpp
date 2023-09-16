#include "Array.hpp"
#include <string>
#include <iostream>

int main()
{
    try
    {
        /* array int */
        Array<int > A(12);
        for (size_t i = 0; i < A.size(); i++)
            A[i] = i * 2;
        for (size_t i = 0; i < A.size(); i++)
            std::cout << A[i] << " ";
        std::cout << std::endl;
        /* Array char * */
        Array<std::string> C(5);
        for (size_t i = 0; i < C.size(); i++)
            C[i] = "ABC";
        for (size_t i = 0; i < C.size(); i++)
            std::cout << C[i] << " ";
        std::cout << std::endl;
    }
    catch(const char *s)
    {
        std::cerr << s << std::endl;
    }
}