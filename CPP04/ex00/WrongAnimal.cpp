/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:42:49 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:56:43 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Wrong Animal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
	std::cout << "WrongAnimal <" << type << "> constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type) {
	std::cout << "WrongAnimal copy constructor called on " << other.type << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	this->type = copy.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called for " << this->type << std::endl;
}

void WrongAnimal::makeSound() const {
	std::cout << "Default WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}