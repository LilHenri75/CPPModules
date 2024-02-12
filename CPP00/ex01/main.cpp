/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:25:54 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/12 11:27:51 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdio>

static inline bool isInputValid(const std::string& input)
{
	return (input == "ADD" || input == "SEARCH" || input == "EXIT");
}

void helloMsg(void)
{
	std::cout << std::endl <<
			"          ADD - Add a new contact\n"
			"          SEARCH - Display a contact\n"
			"          EXIT - Exit PhoneBook\n" << std::endl;
}

std::string getInput(void)
{
	std::string input;

	while (1)
	{
		std::cout << "CPP00-ex01> ";
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cin.clear();
			clearerr(stdin);
		}
		if (!input.empty() && isInputValid(input))
			break;
		std::cin.clear();
		std::cout << "[1] Please insert a valid input\n" << std::endl;
	}
	std::cout << std::endl;
	return input;
}

int main(void)
{
	PhoneBook pb;
	std::string input;

	helloMsg();
	while (1)
	{
		input = getInput();
		if (input == "ADD")
			pb.addContact();
		else if (input == "SEARCH")
			pb.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "[0] Exiting the phonebook" << std::endl;
			return EXIT_SUCCESS;
		}
	}
	return EXIT_SUCCESS;
}