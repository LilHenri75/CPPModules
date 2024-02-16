/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:27:21 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/15 18:12:12 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Function to call constructor
PhoneBook::PhoneBook(void) {
	count = 0;
	return;
}

// Function to call destructor
PhoneBook::~PhoneBook(void) {
	return;
}

// Function to format the field to display
std::string getFormattedField(const std::string& field)
{
	if (field.length() > 10)
		return field.substr(0,9) + ".";
	return field;
}

// Function to display the contact info
void display_contact_info(Contact contact)
{
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

// Function to add a contact
void PhoneBook::addContact(void)
{
	Contact	new_contact;
	std::string	input;

	while (1) // Ask the user for his First name
	{
		std::cout << "First name: ";
		getline(std::cin, input);
		if (std::cin.eof() == true) // check if the input is EOF
		{
			std::cin.clear(); // clear the input
			std::cout << std::endl; // output a line break
			clearerr(stdin); // clear the error
		}
		if (!input.empty())
			break;
		std::cin.clear();
		std::cout << "[1] First name cannot be empty" << std::endl;
	}
	new_contact.setFirstName(input);

	while (1) // Ask the user for his Last name
	{
		std::cout << "Last name: ";
		getline(std::cin, input);
		if (std::cin.eof() == true) // check if the input is EOF
		{
			std::cin.clear(); // clear the input
			std::cout << std::endl; // output a line break
			clearerr(stdin); // clear the error
		}
		if (!input.empty())
			break;
		std::cin.clear();
		std::cout << "[1] Last name cannot be empty" << std::endl;
	}
	new_contact.setLastName(input);

	while (1) // Ask the user for his Nicktame
	{
		std::cout << "Nickname: ";
		getline(std::cin, input);
		if (std::cin.eof() == true) // check if the input is EOF
		{
			std::cin.clear(); // clear the input
			std::cout << std::endl; // output a line break
			clearerr(stdin); // clear the error
		}
		if (!input.empty())
			break;
		std::cin.clear();
		std::cout << "[1] Nickname name cannot be empty" << std::endl;
	}
	new_contact.setNickName(input);

	while (1) // Ask the user for his Phone number
	{
		std::cout << "Phone number: ";
		getline(std::cin, input);
		if (std::cin.eof() == true) // check if the input is EOF
		{
			std::cin.clear(); // clear the input
			std::cout << std::endl; // output a line break
			clearerr(stdin); // clear the error
		}
		if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cin.clear();
			std::cout << "[1] Phone number must be fully composed by numbers" << std::endl;
			continue;
		}
		break;
	}
	new_contact.setPhoneNumber(input);

	while (1) // Ask the user his Darkest secret
	{
		std::cout << "Darkest secret: ";
		getline(std::cin, input);
		if (std::cin.eof() == true) // check if the input is EOF
		{
			std::cout << std::endl; // output a line break
			clearerr(stdin); // clear the error
		}
		if (!input.empty())
			break;
		std::cin.clear();
		std::cout << "[1] Darkest secret cannot be empty" << std::endl;
	}
	std::cout << std::endl;
	new_contact.setDarkestSecret(input);
	contacts[count % 8] = new_contact; // Put the contact at the right index
	count += 1; // Increase the count
	std::cout << "[0] New contact added" << std::endl;
	std::cin.clear();
	std::cout << std::endl;
}

// Function to search a contact
void PhoneBook::searchContact(void)
{
	if (count == 0) // If no contact print a message
	{
		std::cout << "[1] No contacts to display!" << std::endl;
		return;
	}
	// Display the first 8 contacts
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (size_t i = 0; i < count && i < 8; i += 1)
	{
		std::cout << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << getFormattedField(contacts[i].getFirstName()) << "|" ;
		std::cout << std::right << std::setw(10) << getFormattedField(contacts[i].getLastName()) << "|";
		std::cout << std::right << std::setw(10) << getFormattedField(contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::string index;
	int conv_index;
	while (42)
	{
		std::cout << "[0] Please insert the index of the contact you'd like to display: "; // Ask the user for the contact to display
		getline(std::cin, index);
		if (std::cin.eof() == true) // check if the input is EOF
		{
			std::cout << std::endl; // output a line break
			clearerr(stdin); // clear the error
		}
		if (!index.empty() && index.find_first_not_of("0123456789") == std::string::npos) // Check if empty or not a number
		{
			conv_index = atoi(index.c_str()); // Convert the index into an int
			if (conv_index <= 7) // If the number is between 0 and 7 exit the loop
				break;
		}
		std::cin.clear();
		std::cout << "Invalid input" << std::endl;
	}
	std::cout << std::endl;
	if ((size_t)conv_index > (count - 1)) // Check if there is a contact at this index
		std::cout << "There's no contact with that index" << std::endl;
	else // If there is, display contact information
		display_contact_info(this->contacts[conv_index]);
	std::cin.clear();
	std::cout << std::endl;
}
