/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:37:26 by hebernar          #+#    #+#             */
/*   Updated: 2023/12/23 14:21:20 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

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