# include "easyfind.hpp"
# include <vector>
# include <list>
# include <deque>

void test_vector()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	try
	{
		easyfind(vec, 2);
        std::cout << "Value found in container" << std::endl;
        easyfind(vec, 4); // Should throw an exception
    }
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test_list()
{
	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	try
	{
		easyfind(lst, 2);
        std::cout << "Value found in container" << std::endl;
        easyfind(lst, 4); // Should throw an exception
    }
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test_deque()
{
	std::deque<int> deq;
	deq.push_back(1);
	deq.push_back(2);
	deq.push_back(3);
	try
	{
        easyfind(deq, 2);
        std::cout << "Value found in container" << std::endl;
        easyfind(deq, 4); // Should throw an exception
    }
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	test_vector();
	test_list();
	test_deque();
	return 0;
}