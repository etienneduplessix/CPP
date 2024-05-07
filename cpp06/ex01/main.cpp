#include "Serialization.hpp"
#include "data.h"
#include <iostream>
#include <cstdint> // Add this for uintptr_t

int main() {
    Data data;
    data.x = 123;
    data.y = 'a';

    Serializer::Serializer serializer; // Create an instance of the Serializer class.

    std::uintptr_t serialized = serializer.serialize(&data); // Use std::uintptr_t instead of uintptr_t

    Data* deserialized = serializer.deserialize(serialized);

    if (&data == deserialized) {
        std::cout << "Serialization and deserialization succeeded." << std::endl; // Corrected the missing quotation mark.
    } else {
        std::cout << "Serialization and deserialization failed." << std::endl; // Corrected the missing quotation mark.
    }

    return 0;
}
