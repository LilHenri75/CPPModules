#include <iostream>
#include "whatever.hpp"

int main()
{
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "SWAP" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "MIN" << std::endl << min(a, b) << std::endl;
    std::cout << "MAX" << std::endl << max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    ::swap(c, d);
    std::cout << "SWAP" << std::endl;
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "MIN" << std::endl << ::min(c, d) << std::endl;
    std::cout << "MAX" << std::endl << ::max(c, d) << std::endl;
}