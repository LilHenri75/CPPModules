/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:27:15 by hebernar          #+#    #+#             */
/*   Updated: 2023/12/21 13:33:32 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return;
}

void Contact::setFirstName(std::string str) {
	this->firstName = str;
}

void Contact::setLastName(std::string str) {
	this->lastName = str;
}

void Contact::setNickName(std::string str) {
	this->nickname = str;
}

void Contact::setPhoneNumber(std::string str) {
	this->phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str) {
	this->darkestSecret = str;
}

const std::string Contact::getFirstName(void) const {
	return this->firstName;
}

const std::string Contact::getLastName(void) const {
	return this->lastName;
}

const std::string Contact::getNickname(void) const {
	return this->nickname;
}

const std::string Contact::getPhoneNumber(void) const {
	return this->phoneNumber;
}

const std::string Contact::getDarkestSecret(void) const {
	return this->darkestSecret;
}