/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:36:11 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:57:38 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain()){
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type), brain(new Brain()) {
	std::cout << "Cat <" << type << "> constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	this->brain = new Brain(*other.getBrain());
	std::cout << "Cat copy constructor called on " << other.type << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	if (this != &copy) {
		this->type = copy.type;
		this->brain = new Brain(*copy.getBrain());
	}
	return *this;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat destructor called for " << this->type << std::endl;
}

Brain *Cat::getBrain() const {
	return this->brain;
}

void Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}