/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:17:56 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/20 15:45:51 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	public :
		Weapon(std::string weapon);
		~Weapon(void);
		const std::string &getType(void) const;
		void setType(std::string weapon);
	private :
		std::string type;
};

#endif