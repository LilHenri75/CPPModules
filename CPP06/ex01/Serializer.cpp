#include "Serializer.hpp"

// Constructors
Serializer::Serializer() {}

Serializer::Serializer(const Serializer &src) { *this = src; }

// Destructors
Serializer::~Serializer() {}

// Operator=
Serializer &Serializer::operator=(const Serializer &src) {
	if (this != &src) {}
	return *this;
}

// Methods

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}