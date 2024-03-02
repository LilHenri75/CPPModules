/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:38:53 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:56:17 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type) {
	std::cout << "Dog <" << type << "> constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copy constructor called on " << other.type << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
	this->type = copy.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called for " << this->type << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}