/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:17:43 by hebernar          #+#    #+#             */
/*   Updated: 2023/12/25 08:39:12 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
	private :
		std::string name;
		Weapon weapon;
};

#endif