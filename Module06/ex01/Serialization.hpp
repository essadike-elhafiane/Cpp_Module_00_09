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
        Serialization(const Serialization &Se);
        Serialization& operator=(const Serialization& Se);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serialization();
};



#endif