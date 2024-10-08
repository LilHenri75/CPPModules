#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Numbers in Span: ";
    sp.showNumbers();

    try {
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test adding more numbers than capacity
    try {
        sp.addNumber(42);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test with a larger Span
    Span sp_large = Span(100000);
    for (int i = 0; i < 100000; ++i) {
        // add random numbers to the span
        sp_large.addNumber(rand() % 2000000);
    }

    try {
        std::cout << "Shortest span in large Span: " << sp_large.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "Longest span in large Span: " << sp_large.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test with a Span of size 1
    Span sp_one = Span(1);
    sp_one.addNumber(42);

    try {
        std::cout << "Shortest span in Span of size 1: " << sp_one.shortestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        std::cout << "Longest span in Span of size 1: " << sp_one.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

}