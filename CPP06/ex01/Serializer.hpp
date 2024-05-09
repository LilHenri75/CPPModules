#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <stdint.h>

typedef struct Data
{
	std::string name;
	std::string sexe;
	Data *next;
}	Data;

class Serializer
{
	public:
		// Constructors
		Serializer();
		Serializer(const Serializer &src);
		// Destructor
		~Serializer();
		// Operator=
		Serializer &operator=(const Serializer &src);
		// Methods
		uintptr_t serialize(Data *ptr);
		Data *deserialize(uintptr_t raw);
};

#endif