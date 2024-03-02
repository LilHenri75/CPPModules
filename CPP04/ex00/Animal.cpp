/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:41:07 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:55:47 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal <" << type << "> constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type) {
	std::cout << "Animal copy constructor called on " << other.type << std::endl;
}

Animal &Animal::operator=(const Animal &copy) {
	this->type = copy.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor called for " << this->type << std::endl;
}

void Animal::makeSound() const {
	std::cout << "Default animal sound" << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}