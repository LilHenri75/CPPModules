/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:44:19 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/24 02:42:57 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->gateKeeperMode = false;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "ScavTrap copy constructor called on " << copy.name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap <" << name << "> constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	this->name = src.name;
	this->hitPoints = src.hitPoints;
	this->energyPoints = src.energyPoints;
	this->attackDamage = src.attackDamage;
	return *this;
}
void ScavTrap::attack(const std::string &target) {
	if (this->hitPoints <= 0) {
		std::cout << "ScavTrap " << this->name << " has no hitPoints and can't do anything!" << std::endl;
		return;
	}
	if (this->energyPoints < 1) {
		std::cout << "ScavTrap " << this->name << " is out of energy!" << std::endl;
		return;
	}
	else {
		std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	return;
}

void ScavTrap::guardGate(void) {
	if (this->gateKeeperMode == false) {
		std::cout << "ScavTrap " << this->name << " has entered gate keeper mode" << std::endl;
		this->gateKeeperMode = true;
	}
	else {
		std::cout << "ScavTrap " << this->name << " has exited gate keeper mode" << std::endl;
		this->gateKeeperMode = false;
	}
	return;
}