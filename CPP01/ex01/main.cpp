/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:37:19 by hebernar          #+#    #+#             */
/*   Updated: 2023/12/23 14:42:00 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <limits>

// Prompt the user for the number of zombies to create and the name of the zombies.
int	main()
{
	int N;
	std::string name;

	std::cout << "How many zombies do you want to create ?" << std::endl;
	while (!(std::cin >> N) || N <= 0 || N > std::numeric_limits<int>::max())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input. Please enter a positive integer less than or equal to " << std::numeric_limits<int>::max() << std::endl;
	}
	std::cout << "What is the name of the zombies ?" << std::endl;
	std::cin >> name;
	Zombie *horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
