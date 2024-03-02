/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:45:50 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:57:15 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Wrong Cat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
	std::cout << "WrongCat <" << type << "> constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "WrongCat copy constructor called on " << other.type << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
	this->type = copy.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called for " << this->type << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Miaou" << std::endl;
}