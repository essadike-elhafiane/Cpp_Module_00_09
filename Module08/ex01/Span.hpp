#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span{
    private:
        size_t size;
        std::vector<int> list;
        // int max;
        // int min;
    public:
        Span ()
        {
            size = 0;
        };
        Span(unsigned int _size)
        {
            size = _size;
        }
        ~Span(){

        }
        void addNumber(int value)
        {
            list.push_back(value);
            std::sort(list.begin(), list.end());
            for (size_t i = 0; i < list.size(); ++i) {
                std::cout << list[i] << " ";
            }
         std::cout << std::endl;
        }
        void print()
        {
            for (size_t i = 0; i < list.size(); ++i) {
                std::cout << list[i] << " ";
            }
         std::cout << std::endl;
        }
        int shortestSpan()
        {
            
        }
        int longestSpan()
        {
            return (list.end() - list.begin());
        }

};

#endif