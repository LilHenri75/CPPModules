/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:37:24 by hebernar          #+#    #+#             */
/*   Updated: 2024/01/29 12:32:27 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(void) {
	return;
}

// Destructor
Zombie::~Zombie(void) {
	std::cout << this->name << " is dead." << std::endl;
	return;
}

// Getters
void Zombie::setZombie(std::string name) {
	this->name = name;
	return;
}

// Member functions
void Zombie::announce(void) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
