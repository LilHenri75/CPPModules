/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:57:42 by hebernar          #+#    #+#             */
/*   Updated: 2024/01/29 20:31:16 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	// Test the complain function with different levels
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");

	// Test with an unrecognized level
	harl.complain("unrecognized_level");

	return (0);
}