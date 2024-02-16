/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:23:35 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/15 17:15:09 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Function to create a new zombie on the heap
Zombie* newZombie(std::string name) {
	Zombie *zombie = new Zombie(name); // new is used to allocate memory on the heap (need to be deleted using delete)
	return (zombie);
}