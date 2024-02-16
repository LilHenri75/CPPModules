/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:37:26 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/13 13:20:49 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <limits>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setZombie(std::string name);
	private:
		std::string	name;
};

Zombie *zombieHorde (int N, std::string name);

#endif