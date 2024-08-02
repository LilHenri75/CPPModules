#include "easyfind.hpp"
#include <list>

int main()
{
	std::list<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	test.push_back(4);
	test.push_back(5);

	std::list<int>::const_iterator	test_it1 = test.end();
	try
	{
		test_it1 = ::easyfind(test, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (test_it1 != test.end())
		std::cout << *test_it1 << " found" << std::endl;

	std::list<int>::const_iterator	test_it2 = test.end();

	try
	{
		test_it2 = ::easyfind(test, 6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	if (test_it2 != test.end())
		std::cout << *test_it2 << " found" << std::endl;

	return (0);
}