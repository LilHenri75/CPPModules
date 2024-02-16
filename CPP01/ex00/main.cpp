/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:03:01 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/15 17:14:41 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Main function that prompts the user for a name, and if he wants the zombie to use Stack or Heap allocation.
int	main () {
	std::string name;
	std::string choice;

	std::cout << "Enter a name for your zombie: ";
	std::getline(std::cin, name);
	std::cout << "Do you want your zombie to be allocated on the stack or on the heap? (stack/heap): ";
	std::getline(std::cin, choice);
	if (choice == "stack") {
		randomChump(name);
	}
	else if (choice == "heap") {
		Zombie *zombie = newZombie(name);
		delete zombie;
	}
	else
		std::cout << "Wrong choice." << std::endl;
	return (0);
}