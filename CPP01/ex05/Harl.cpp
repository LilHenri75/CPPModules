/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:48:49 by hebernar          #+#    #+#             */
/*   Updated: 2024/01/29 16:59:47 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <map>

Harl::Harl(void)
{
	return;
}

Harl::~Harl(void)
{
	return;
}

// Call one of the private functions depending on the level
void Harl::complain(std::string level)
{
    // Define a map from strings to member function pointers
    std::map<std::string, void (Harl::*)()> funcMap;

    // Insert elements into the map
    funcMap.insert(std::make_pair("debug", &Harl::debug));
    funcMap.insert(std::make_pair("info", &Harl::info));
    funcMap.insert(std::make_pair("warning", &Harl::warning));
    funcMap.insert(std::make_pair("error", &Harl::error));

    // Check if the level exists in the map
    if (funcMap.count(level) > 0) {
        // Call the corresponding function
        (this->*funcMap[level])();
    } else {
        // Handle the case where the level is not recognized
        std::cout << "Invalid level: " << level << std::endl;
    }
}

void Harl::debug()
{
	std::cout << "Debug" << std::endl;
}

void Harl::info()
{
	std::cout << "Info" << std::endl;
}

void Harl::warning()
{
	std::cout << "Warning" << std::endl;
}

void Harl::error()
{
	std::cout << "Error" << std::endl;
}