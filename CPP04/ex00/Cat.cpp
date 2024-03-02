/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:36:11 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:56:11 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat <" << type << "> constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called on " << other.type << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	this->type = copy.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called for " << this->type << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miaou" << std::endl;
}