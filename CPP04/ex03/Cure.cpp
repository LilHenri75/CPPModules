/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:28:16 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 11:14:41 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "./main.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other.type) {
	std::cout << "Cure copy constructor called on " << this->type << std::endl;
}

Cure &Cure::operator=(const Cure &copy) {
	if (this != &copy)
		this->type = copy.type;
	return (*this);
}

Cure::~Cure() {
	std::cout << "Cure destructor called for " << this->type << std::endl;
}

Cure* Cure::clone() const {
	std::cout << "Cure clone called" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}