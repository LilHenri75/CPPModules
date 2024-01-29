/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:27:21 by hebernar          #+#    #+#             */
/*   Updated: 2024/01/29 12:16:56 by hebernar         ###   ########.fr       */
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

	while (1)
	{
		std::cout << "First name: ";
		getline(std::cin, input);
		if (!input.empty())
			break;
		std::cin.clear();
		std::cout << "First name cannot be empty" << std::endl;
	}
	new_contact.setFirstName(input);

	while (1)
	{
		std::cout << "Last name: ";
		getline(std::cin, input);
		if (!input.empty())
			break;
		std::cin.clear();
		std::cout << "Last name cannot be empty" << std::endl;
	}
	new_contact.setLastName(input);

	while (1)
	{
		std::cout << "Nickname: ";
		getline(std::cin, input);
		if (!input.empty())
			break;
		std::cin.clear();
		std::cout << "Nickname name cannot be empty" << std::endl;
	}
	new_contact.setNickName(input);

	while (1)
	{
		std::cout << "Phone number: ";
		getline(std::cin, input);
		if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cin.clear();
			std::cout << "Phone number must be fully composed by numbers" << std::endl;
			continue;
		}
		break;
	}
	new_contact.setPhoneNumber(input);

	while (1)
	{
		std::cout << "Darkest secret: ";
		getline(std::cin, input);
		if (!input.empty())
			break;
		std::cin.clear();
		std::cout << "Darkest secret cannot be empty" << std::endl;
	}
	new_contact.setDarkestSecret(input);
	contacts[count % 8] = new_contact;
	count += 1;
	std::cout << "[0] Contact added" << std::endl;
}

// Function to search a contact
void PhoneBook::searchContact(void)
{
	if (count == 0)
	{
		std::cout << "[1] There are no contacts to display!" << std::endl;
		return ;
	}
	std::cout << "\n|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (size_t i = 0; i < count && i < 8; i += 1)
	{
		std::cout << "|" << std::right << std::setw(10) << i << "|";
		std::cout << std::right << std::setw(10) << getFormattedField(contacts[i].getFirstName()) << "|" ;
		std::cout << std::right << std::setw(10) << getFormattedField(contacts[i].getLastName()) << "|";
		std::cout << std::right << std::setw(10) << getFormattedField(contacts[i].getNickname()) << "|";
		std::cout << std::endl;
	}
	std::string index;
	int conv_index;
	while (42)
	{
		std::cout << "[0] Please insert the index of the contact you'd like to display: ";
		getline(std::cin, index);
		if (!index.empty() && index.find_first_not_of("0123456789") == std::string::npos)
		{
			conv_index = atoi(index.c_str());
			if (conv_index <= 7)
				break;
		}
		std::cin.clear();
		std::cout << "Invalid input" << std::endl;
	}
	if ((size_t)conv_index > (count - 1))
		std::cout << "There's no contact with that index" << std::endl;
	else
		display_contact_info(this->contacts[conv_index]);
}
