/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:27:15 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/12 13:32:57 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) // Constructor
{
	return;
}

Contact::~Contact(void) // Destructor
{
	return;
}

void Contact::setFirstName(std::string str) // Setters
{
	this->firstName = str;
}

void Contact::setLastName(std::string str) // Setters
{
	this->lastName = str;
}

void Contact::setNickName(std::string str) // Setters
{
	this->nickname = str;
}

void Contact::setPhoneNumber(std::string str) // Setters
{
	this->phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str) // Setters
{
	this->darkestSecret = str;
}

std::string Contact::getFirstName(void) const // Getters
{
	return this->firstName;
}

std::string Contact::getLastName(void) const // Getters
{
	return this->lastName;
}

std::string Contact::getNickname(void) const // Getters
{
	return this->nickname;
}

std::string Contact::getPhoneNumber(void) const // Getters
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret(void) const // Getters
{
	return this->darkestSecret;
}