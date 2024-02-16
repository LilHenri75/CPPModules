/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:25:54 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/15 18:10:22 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Function to check if the input is valid
static inline bool isInputValid(const std::string& input) {
	if (input == "ADD" || input == "SEARCH" || input == "EXIT")
		return true;
	return false;
}

// Function to display the welcome message
void welcome(void) {
	std::cout << std::endl << "Welcome to the Phonebook, please enter one of the command below:\n\nADD - Add a new contact\nSEARCH - Display a contact\nEXIT - Exit PhoneBook\n" << std::endl;
}

// Function to get the user input
std::string getUserInput(void) {
	std::string input;

	while (1)
	{
		std::cout << "CPP00-ex01> ";
		std::getline(std::cin, input); // Get the user input
		if (std::cin.eof() == true) // check if the input is EOF
		{
			clearerr(stdin); // clear the error and EOF
			std::cout << std::endl; // output a line break
		}
		if (!input.empty() && isInputValid(input)) // check if the input is valid and not empty
			break;
		std::cin.clear(); // clear the failed state
		std::cout << std::endl;
		std::cout << "[1] Please insert a valid input\n" << std::endl; // display an error message
	}
	std::cin.clear(); // clear the failed state
	std::cout << std::endl;
	return input;
}

int main(void) {
	PhoneBook phonebook;
	std::string input;

	welcome();
	while (1)
	{
		input = getUserInput();
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "[0] Exiting phonebook" << std::endl;
			std::cout << std::endl;
			return EXIT_SUCCESS;
		}
	}
	return EXIT_SUCCESS;
}