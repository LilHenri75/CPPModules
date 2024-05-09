/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:54:29 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 13:21:39 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp"

Character::Character() : name("Character") {
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	return;
}

Character::Character(std::string const &name) : name(name) {
	std::cout << "Character <" << name << ">constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
	return;
}

Character::Character(const Character &other) : name(other.name){
	std::cout << "Character copy constructor called" << std::endl;
	*this = other;
}

Character::~Character(void) {
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->materia[i] != NULL) {
			delete this->materia[i];
		}
	}
}

Character &Character::operator=(const Character &copy) {
	if (this != &copy) {
		this->name = copy.name;
		for (int i = 0; i < 4; i++) {
			if (this->materia[i] != NULL) {
				delete this->materia[i];
			}
			this->materia[i] = copy.materia[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *materia) {
	std::cout << "Character equip called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->materia[i] == NULL) {
			this->materia[i] = materia->clone();
			return;
		}
	}
}
void Character::unequip(int idx) {
	if (idx < 0 || idx > 3)
		return;
	if (this->materia[idx]) {
		this->materia[idx] = NULL;
	}
}
void Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx > 3)
		return;
	this->materia[idx]->use(target);
}