/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:03:33 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/12 13:25:24 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // Input / Output library

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"; // Output to the console
		std::cout << std::endl; // Line break
	}
	else
	{
		for (int i = 1; i < argc; i++) // Loop through the arguments
		{
			std::string tmp = argv[i]; // Create a string from the argument
			for (int j = 0; argv[i][j]; j++) // Loop through the string
				tmp[j] = std::toupper(tmp[j]); // Convert the character to uppercase
			std::cout << tmp; // Output the string to the console
			if (i < argc - 1) // If it's not the last argument
				std::cout << " "; // Output a space
		}
		std::cout << std::endl; // Line break
	}
	return (0);
}