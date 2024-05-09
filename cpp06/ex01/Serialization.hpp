#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <stdint.h>
#include <iostream>
#include "data.h"

class Serializer
{
	private:

		Serializer(void);
		Serializer(Serializer const &src);
		Serializer&	operator=(Serializer const &assign);
		~Serializer(void);

	public:

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif 