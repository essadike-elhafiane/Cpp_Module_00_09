#include "Serialization.hpp"

struct f{
    char m;
};

int main()
{
    Data *DD = new Data(65, 123, "Data");
    Data data(2, 13, "bro");
    uintptr_t raw1 = Serialization::serialize(DD);
    Data *D1 = Serialization::deserialize(raw1);
    if (DD == D1)
        std::cout << "address DD == addrss D1 " << std::endl;
    uintptr_t serialized = Serialization::serialize(&data);
    Data* deserialized = Serialization::deserialize(serialized);
    if (deserialized == &data)
        std::cout << "Data id : " << deserialized->id << " Data name : " << deserialized->name << std::endl;
}