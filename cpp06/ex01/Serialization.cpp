
#include "Serialization.hpp"

namespace Serializer {
    uintptr_t Serializer::serialize(Data* ptr) {
        // Your serialization logic here
        return reinterpret_cast<uintptr_t>(ptr);
    }

    Data* Serializer::deserialize(uintptr_t raw) {
        // Your deserialization logic here
        return reinterpret_cast<Data*>(raw);
    }
}