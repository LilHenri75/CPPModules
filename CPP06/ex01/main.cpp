#include "Serializer.hpp"
#include <iostream>

int main() {
    // Create a non-empty Data structure
    Data data;
    data.date = "2023-10-05";
    data.jour = "Thursday";
    data.next = nullptr;

    // Serialize the Data pointer
    uintptr_t raw = Serializer::serialize(&data);
	
    // Deserialize the uintptr_t back to a Data pointer
    Data *deserializedData = Serializer::deserialize(raw);

    // Ensure the deserialized pointer compares equal to the original pointer
    if (deserializedData == &data) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Original Data address: " << &data << std::endl;
        std::cout << "Deserialized Data address: " << deserializedData << std::endl;
        std::cout << "Date: " << deserializedData->date << std::endl;
        std::cout << "Jour: " << deserializedData->jour << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
        std::cout << "Original Data address: " << &data << std::endl;
        std::cout << "Deserialized Data address: " << deserializedData << std::endl;
    }

    return 0;
}