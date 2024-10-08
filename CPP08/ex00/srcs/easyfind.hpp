#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>

// Exception class for when the value is not found in the container
class NotFoundException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return "Value not found in container";
		}
};

// Template function to find a value in a container
template <typename T>

// Function to find a value in a container
// std::find is a function template that searches for an element in a range that matches a specified value.
// It takes three arguments: the beginning of the range, the end of the range, and the value to search for.
// It returns an iterator to the first element in the range that compares equal to the specified value.
// If no such element is found, it returns an iterator to the end of the range.
void easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NotFoundException();
}

#endif