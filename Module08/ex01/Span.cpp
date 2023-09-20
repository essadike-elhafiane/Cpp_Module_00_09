#include "Span.hpp"

Span::Span ()
{
    size = 0;
};

Span::Span(unsigned int _size)
{
    size = _size;
}

Span::Span(const Span& span)
{
    *this = span;
};
Span::~Span(){

}
Span& Span::operator=(const Span& span)
{
    if (this != &span)
    {
        this->size = span.size;
        list = span.list;
    }
    return *this;
}
void Span::addNumber(int value)
{
    if (size <= list.size())
        throw "Error the container is full !";
    std::vector<int>::iterator it = std::find(list.begin(), list.end(), value);
    if(it != list.end())
        throw "Error element is found !";
    list.push_back(value);
    std::sort(list.begin(), list.end());
}

int Span::shortestSpan()
{
    if (size == 0 || list.size() <= 1)
        throw "Error !";
    int shortspan = *(list.begin() + 1) - *(list.begin());
    for (size_t i = 0; i < list.size() - 1; ++i) {
        if (shortspan > *(list.begin() + 1 + i) - *(list.begin() + i))
            shortspan = *(list.begin() + 1 + i) - *(list.begin() + i);
    }
    return shortspan;
}

int Span::longestSpan()
{
    if (size == 0 || list.size() <= 1)
        throw "Error !";
    return (*(list.end() - 1) - *(list.begin()));
}
