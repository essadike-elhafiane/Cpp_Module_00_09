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
    public:
        Span ();
        Span(unsigned int _size);
        Span(const Span& span);
        ~Span();
        Span& operator=(const Span& span);
        void addNumber(int value);
        int shortestSpan();
        int longestSpan();
};

#endif