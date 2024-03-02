/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:28:27 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 12:58:56 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	return;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = other;
	return;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->materia[i] != NULL)
			delete this->materia[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy) {
	if (this != &copy) {
		for (int i = 0; i < 4; i++) {
			if (this->materia[i] != NULL)
				delete this->materia[i];
			this->materia[i] = copy.materia[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	std::cout << "learnMateria called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->materia[i] == NULL) {
			this->materia[i] = materia;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	std::cout << "createMateria called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->materia[i] != NULL && \
		this->materia[i]->getType() == type) {
			return (this->materia[i]->clone());
		}
	}
	return (0);
}