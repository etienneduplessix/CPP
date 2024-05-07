
#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream>
#include <cstdint> 
#include "data.h"
namespace Serializer {
    class Serializer {
       public:
             static uintptr_t serialize(Data* ptr);
            static Data* deserialize(uintptr_t raw);
    };
};

#endif // SERIALIZER_HPP
