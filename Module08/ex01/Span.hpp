#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <set>

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
            if (size <= list.size())
                throw "Error the container is full !";
            std::vector<int>::iterator it = std::find(list.begin(), list.end(), value);
            if(it != list.end())
                throw "Error element is found !";
            list.push_back(value);
            std::sort(list.begin(), list.end());
        }
    
        int shortestSpan()
        {
            if (size == 0 || list.size() <= 1)
                throw "Error lenght of containe is short !";
            int shortspan = list[1] - list[0];
            for (size_t i = 0; i < list.size() - 1; ++i) {
                if (shortspan > list[i + 1] - list[i])
                    shortspan = list[i + 1] - list[i];
            }
            return shortspan;
        }
        int longestSpan()
        {
            if (size == 0 || list.size() <= 1)
                throw "Error lenght of containe is short !";
            return (list[list.size() - 1] - list[0]);
        }

};

#endif