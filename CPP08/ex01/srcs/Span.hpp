#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	public:
		Span(unsigned int N); // Constructor
		Span(const Span &other); // Copy constructor
		~Span(); // Destructor
		Span &operator=(const Span &other); // Copy assignment operator
		void addNumber(int number); // Add a number to the vector
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end); // Add a range of numbers to the vector
		int shortestSpan(); // Find the shortest span between two numbers
		int longestSpan(); // Find the longest span between two numbers
        void showNumbers(); // Show all numbers in the vector


	private:
		std::vector<int> _vec;
		unsigned int _N;

    class FullException : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return "Span is full";
            }
    };

    class NoSpanException : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return "No span can be found";
            }
    };		
};

#endif