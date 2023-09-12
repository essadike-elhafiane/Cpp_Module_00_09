#include "Serialization.hpp"

int main()
{
    Data *DD = new Data(1, 123, "ah");
    Data data(1, 13, "fgjfj");
    // uintptr_t raw = 43;
    uintptr_t raw1 = Serialization::serialize(DD);
    Data *D1 = Serialization::deserialize(raw1);
    if (DD == D1)
        std::cout << "dgsgsg" << std::endl;
    uintptr_t serialized = Serialization::serialize(&data);
    Data* deserialized = Serialization::deserialize(serialized);
    if (deserialized == &data)
        std::cout << "pri " << deserialized->id << " " << deserialized->name ;
}