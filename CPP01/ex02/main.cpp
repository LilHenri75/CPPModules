/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:55:54 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/15 17:26:42 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main ()
/*
Write a program that contains:
• A string variable initialized to "HI THIS IS BRAIN".
• stringPTR: A pointer to the string.
• stringREF: A reference to the string.
Your program has to print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF.
And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF.
*/
{
	std::string str = "HI THIS IS BRAIN"; // A string variable initialized to "HI THIS IS BRAIN"
	std::string *stringPTR = &str; // stringPTR: A pointer to the string
	std::string &stringREF = str; // stringREF: A reference to the string

	std::cout << "Memory address of the string variable: " << &str << std::endl; // The memory address of the string variable
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl; // The memory address held by stringPTR
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl; // The memory address held by stringREF

	std::cout << "Value of the string variable: " << str << std::endl; // The value of the string variable
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl; // The value pointed to by stringPTR
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl; // The value pointed to by stringREF
	return 0;
}