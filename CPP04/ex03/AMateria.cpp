/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:23:10 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 11:11:23 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

AMateria::AMateria() : type("AMateria") {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type) {
	std::cout << "AMateria <" << type << "> constructor called" << std::endl;
}


AMateria::AMateria(const AMateria &other) : type(other.type) {
	std::cout << "AMateria copy constructor called on " << other.type << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy) {
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called for " << this->type << std::endl;
}

void AMateria::use(ICharacter &target) {
	std::cout << "AMateria use on " << target.getName() << std::endl;
}

std::string const &AMateria::getType() const {
	return (this->type);
}