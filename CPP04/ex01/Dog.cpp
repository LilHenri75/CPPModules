/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:38:53 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:57:44 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain()){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type), brain(new Brain()){
	std::cout << "Dog <" << type << "> constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	this->brain = new Brain(*other.getBrain());
	std::cout << "Dog copy constructor called on " << other.type << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
	this->type = copy.type;
	this->brain = new Brain(*copy.getBrain());
	return *this;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog destructor called for " << this->type << std::endl;
}

Brain *Dog::getBrain() const {
	return this->brain;
}

void Dog::makeSound() const {
	std::cout << "Wouf" << std::endl;
}