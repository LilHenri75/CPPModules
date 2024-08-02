#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <stdint.h>

typedef struct Data
{
    std::string date;
    std::string jour;
    Data *next;
} Data;

class Serializer
{
    public:
        // Static Methods
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);

    private:
        // Constructors
        Serializer();
        Serializer(const Serializer &src);
        // Destructor
        ~Serializer();
        // Operator=
        Serializer &operator=(const Serializer &src);
};

#endif