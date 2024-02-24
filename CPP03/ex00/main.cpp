/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:46:07 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/24 02:39:26 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "   TESTING CLAPTRAP   " << std::endl << std::endl;
	{
		std::cout << "  Constructors tests  " << std::endl << std::endl;
		ClapTrap a;
		ClapTrap b("Jimmy");
		ClapTrap c(b);
		std::cout << std::endl;

		std::cout << "  Functions tests  " << std::endl << std::endl;
		a.attack("Enemy");
		a.takeDamage(9);
		a.beRepaired(5);
		a.takeDamage(10);
		a.takeDamage(1);
		a.beRepaired(1);
		a.attack("Other enemy");
		for (int i = 0; i < 11; i++)
			b.attack("Army");
		b.beRepaired(10);
		std::cout << std::endl;

		std::cout << "  Destructors  " << std::endl << std::endl;
	}
	return 0;
}