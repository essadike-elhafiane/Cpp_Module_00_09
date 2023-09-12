#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <string>
#include <iostream>

struct Data{
    int id;
    unsigned int value;
    std::string name;
    Data(int id, unsigned int value, std::string name):id(id),value(value),name(name)
    {
    };
};

class Serialization
{
    public:
        Serialization(/* args */);
        Serialization(const Serialization &Se)
        {
            *this = Se;
        }
        Serialization& operator=(const Serialization& Se)
        {
            (void)Se;
            return (*this);
        }
        static uintptr_t serialize(Data* ptr)
        {
            return reinterpret_cast<uintptr_t>(ptr);
        }
        static Data* deserialize(uintptr_t raw)
        {
            return reinterpret_cast<Data*>(raw);
        }
        ~Serialization();
};

Serialization::Serialization(/* args */)
{
}

Serialization::~Serialization()
{
}

#endif