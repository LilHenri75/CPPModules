/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:37:29 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/15 17:27:37 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


// Function that creates a horde of zombies.
// N is the number of zombies to create.
// name is the name of the zombies.
Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N]; // Allocate memory on the heap for N zombies
	for (int i = 0; i < N; i++)
		horde[i].setZombie(name); // Set the name of each zombie
	return (horde);
}