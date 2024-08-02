#pragma once

#include "Array.hpp"

// Construction with no parameter: Creates an empty array.
template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

// Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.
template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _size(n) {}

// Construction by copy
template <typename T>
Array<T>::Array(Array const &src) : _array(NULL), _size(0) {
    *this = src;
}

// Destructor
template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

// Assignment operator
template <typename T>
Array<T> &Array<T>::operator=(Array const &src) {
    if (this != &src) {
        delete[] _array;
        _size = src._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = src._array[i];
        }
    }
    return *this;
}

// Elements can be accessed through the subscript operator: [ ].
template <typename T>
T &Array<T>::operator[](unsigned int i) {
    if (i >= _size) {
        throw std::exception();
    }
    return _array[i];
}

// A member function size() that returns the number of elements in the array.
template <typename T>
unsigned int Array<T>::size() const { 
    return _size; 
}
