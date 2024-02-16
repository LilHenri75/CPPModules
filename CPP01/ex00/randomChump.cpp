/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:23:44 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/13 12:57:32 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Function to create a new zombie on the stack
void randomChump(std::string name) {
	Zombie zombie = Zombie(name); // dynamic allocation on the stack
	zombie.announce(); // call the function announce
	return;
}