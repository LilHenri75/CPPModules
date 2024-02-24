/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:48:49 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/21 01:03:12 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <map>

Harl::Harl(void) {}

Harl::~Harl(void) {}

// Call one of the private functions depending on the level
void Harl::complain(std::string level) {
	// Define a map from strings to member function pointers
	std::map<std::string, void (Harl::*)()> functionMap;

	// Insert elements into the map
	functionMap.insert(std::make_pair("debug", &Harl::debug));
	functionMap.insert(std::make_pair("info", &Harl::info));
	functionMap.insert(std::make_pair("warning", &Harl::warning));
	functionMap.insert(std::make_pair("error", &Harl::error));

	// Check if the level exists in the map
	if (functionMap.count(level) != 0) {
		// Call the corresponding function
		(this->*functionMap[level])();
	} else {
		// Handle the case where the level is not recognized
		std::cout << "Invalid level: " << level << std::endl;
	}
}

void Harl::debug() {
	std::cout << "Debug" << std::endl;
}

void Harl::info() {
	std::cout << "Info" << std::endl;
}

void Harl::warning() {
	std::cout << "Warning" << std::endl;
}

void Harl::error() {
	std::cout << "Error" << std::endl;
}