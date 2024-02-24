/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:17:49 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/20 15:45:42 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor assigninig a name to the weapon
Weapon::Weapon (std::string weapon) {
	this->type = weapon;
}

// Destructor
Weapon::~Weapon()
{
	return;
}

// Get the type of the weapon
const std::string &Weapon::getType(void) const
{
	return (this->type);
}

// Set the type of the weapon
void Weapon::setType(std::string weapon) {
	this->type = weapon;
	return;
}