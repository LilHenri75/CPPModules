/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:27:15 by hebernar          #+#    #+#             */
/*   Updated: 2024/01/29 11:33:43 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void Contact::setFirstName(std::string str)
{
	firstName = str;
}

void Contact::setLastName(std::string str)
{
	lastName = str;
}

void Contact::setNickName(std::string str)
{
	nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
	phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
	darkestSecret = str;
}

const std::string Contact::getFirstName(void) const
{
	return firstName;
}

const std::string Contact::getLastName(void) const
{
	return lastName;
}

const std::string Contact::getNickname(void) const
{
	return nickname;
}

const std::string Contact::getPhoneNumber(void) const
{
	return phoneNumber;
}

const std::string Contact::getDarkestSecret(void) const
{
	return darkestSecret;
}