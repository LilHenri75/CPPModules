#pragma once
#include <iostream> 

// Implement a function template iter that takes 3 parameters and returns nothing.
// • The first parameter is the address of an array.
// • The second one is the length of the array.
// • The third one is a function that will be called on every element of the array.

template <typename It>

void iter(It *array, int length, void (*func)(It const &))
{
    if (array == NULL || length <= 0 || func == NULL)
        return;
    for (int i = 0; i < length; i++)
        func(array[i]);
}