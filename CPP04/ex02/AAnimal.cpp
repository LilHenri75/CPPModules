/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:37:31 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:57:54 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type) {
	std::cout << "AAnimal <" << type << "> constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type) {
	std::cout << "AAnimal copy constructor called on " << other.type << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &copy) {
	this->type = copy.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called for " << this->type << std::endl;
}

std::string AAnimal::getType() const {
	return this->type;
}