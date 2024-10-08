#include "Span.hpp"

// Constructor
Span::Span(unsigned int N) : _N(N) {
    _vec.reserve(N);
}

// Copy constructor
Span::Span(const Span &other) : _N(other._N), _vec(other._vec) {}

// Copy assignment operator
Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _N = other._N;
        _vec = other._vec;
    }
    return *this;
}

// Destructor
Span::~Span() {}

// Add a number to the vector
// push_back is a member function of the std::vector class that adds an element to the end of the vector.
// It takes one argument: the element to add to the vector.
// It returns nothing.
void Span::addNumber(int number) {
    if (_vec.size() >= _N) {
        throw FullException();
    }
    _vec.push_back(number);
}

// Add a range of numbers to the vector
// std::distance is a function template that returns the number of elements in a range.
// It takes two arguments: the beginning of the range and the end of the range.
// It returns the number of elements in the range.
// _vec.capacity() is the maximum number of elements that the vector can hold.
// _vec.size() is the number of elements in the vector.
// _vec.capacity() - _vec.size() is the number of elements that can still be added to the vector.
// If the number of elements in the range is greater than the number of elements that can still be added to the vector,
// the function throws a FullException.
// Otherwise, it adds the range of numbers to the vector.
// insert is a member function of the std::vector class that inserts elements into the vector at a specified position.
// It takes three arguments: the position to insert the elements at, the beginning of the range of elements to insert, and the end of the range of elements to insert.
// It returns nothing.
void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (static_cast<unsigned long>(std::distance(begin, end)) > _vec.capacity() - _vec.size()) {
        throw FullException();
    }
    _vec.insert(_vec.end(), begin, end);
}

// Find the shortest span between two numbers
// std::sort is a function template that sorts a range of elements in ascending order.
// It takes two arguments: the beginning of the range and the end of the range.
// It returns nothing.
int Span::shortestSpan() {
    if (_vec.size() <= 1) {
        throw NoSpanException();
    }
    std::vector<int> sorted_vec(_vec);
    std::sort(sorted_vec.begin(), sorted_vec.end());
    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sorted_vec.size() - 1; ++i) {
        int span = sorted_vec[i + 1] - sorted_vec[i];
        if (span < shortest) {
            shortest = span;
        }
    }
    return shortest;
}

// Find the longest span between two numbers
// std::max_element is a function template that returns an iterator to the largest element in a range.
// It takes two arguments: the beginning of the range and the end of the range.
// It returns an iterator to the largest element in the range.
// std::min_element is a function template that returns an iterator to the smallest element in a range.
// It takes two arguments: the beginning of the range and the end of the range.
// It returns an iterator to the smallest element in the range.
int Span::longestSpan() {
    if (_vec.size() <= 1) {
        throw NoSpanException();
    }
    int maxElement = *std::max_element(_vec.begin(), _vec.end());
    int minElement = *std::min_element(_vec.begin(), _vec.end());
    return maxElement - minElement;
}

// Show all numbers in the vector
void Span::showNumbers() {
    for (const int &num : _vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
