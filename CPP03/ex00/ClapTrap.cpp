/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:46:02 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/23 16:42:04 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "ClapTrap <" << name << "> constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : name(copy.name), hitPoints(copy.hitPoints), energyPoints(copy.energyPoints), attackDamage(copy.attackDamage) {

	std::cout << "ClapTrap copy constructor called on " << copy.name << std::endl;
}

// Destructor
ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

// Attack function
// Causes the target to lose <attackDamage> hit points
// Cost 1 energy point
void ClapTrap::attack(const std::string &target) {
	if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->name << " has no hitPoints and can't do anything!" << std::endl;
		return;
	}
	if (this->energyPoints < 1) {
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
		return;
	}
	else {
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	return;
}

// Take damage function
// Causes the object to lose <amount> hit points
void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->name << " already has no hit points!" << std::endl;
		return;
	}
	else {
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0) {
			std::cout << "ClapTrap " << this->name << " has no hit points left!" << std::endl;
		}
		return;
	}
};

// Be repaired function
// Causes the object to gain <amount> hit points
// Cost 1 energy point
void ClapTrap::beRepaired(unsigned int amount){
	if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << this->name << " has no hit points and can't be repaired!" << std::endl;
		return;
	}
	if (this->energyPoints < 1) {
		std::cout << "ClapTrap " << this->name << " is out of energy!" << std::endl;
		return;
	}
	else {
		std::cout << "ClapTrap " << this->name << " is repairing himself for " << amount << " points!" << std::endl;
		this->energyPoints -= 1;
	}
	return;
};

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}