#include "iter.hpp"
#include <iostream>


// functions that takes an string as parameter and prints it
void ft_print_string_array(std::string const &str)
{
    std::cout << str << std::endl;
}

// functions that takes an int as parameter and prints it
void ft_print_int_array(int const &i)
{
    std::cout << i << std::endl;
}

int main()
{
    std::cout << "String array:" << std::endl;
    std::string str[] = {"Hello", "World", "42", "is", "the", "answer", "to", "everything"};
    ::iter(str, 8, ft_print_string_array);
    std::cout << std::endl;
    std::cout << "Int array:" << std::endl;
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ::iter(tab, 10, ft_print_int_array);
}