#pragma once

#include <stdexcept> // For std::exception

template <typename T>
class Array {
    private:
        T *_array;
        unsigned int _size;
    public:
        // Construction with no parameter: Creates an empty array.
        Array();

        // Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.
        Array(unsigned int n);

        // Construction by copy
        Array(Array const &src);

        // Destructor
        ~Array();

        // Assignment operator
        Array &operator=(Array const &src);

        // Elements can be accessed through the subscript operator: [ ].
        T &operator[](unsigned int i);

        // A member function size() that returns the number of elements in the array.
        unsigned int size() const;
};

#include "Array.tpp" // Include the implementation file
