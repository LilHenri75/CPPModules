/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:17:39 by hebernar          #+#    #+#             */
/*   Updated: 2024/01/29 14:22:39 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor
HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

// Destructor
HumanA::~HumanA()
{
	return;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}