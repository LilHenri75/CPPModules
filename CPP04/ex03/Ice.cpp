/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:28:16 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 11:14:30 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./main.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other.type) {
	std::cout << "Ice copy constructor called on " << this->type << std::endl;
}

Ice &Ice::operator=(const Ice &copy) {
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

Ice::~Ice() {
	std::cout << "Ice destructor called for " << this->type << std::endl;
}

Ice* Ice::clone() const {
	std::cout << "Ice clone called" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}