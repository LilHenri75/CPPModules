/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:37:19 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/15 17:39:09 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Prompt the user for the number of zombies to create and the name of the zombies.
int	main() {
	int number;
	std::string name;

	std::cout << "How many zombies do you want to create ?" << std::endl;
	while (!(std::cin >> number) || number <= 0 || number >= 100000) // Limit to make sure the program doesn't crash
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Invalid input. Please enter a positive integer less than or equal to 1,000,000" << std::endl;
	}
	std::cin.clear();
	std::cin.ignore();
	std::cout << "What is the name of the zombies ?" << std::endl;
	std::cin >> name;
	Zombie *horde = zombieHorde(number, name);
	for (int i = 0; i < number; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
