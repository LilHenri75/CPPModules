/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 12:17:56 by hebernar          #+#    #+#             */
/*   Updated: 2024/01/29 14:15:37 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
	public :
		Weapon(std::string type);
		~Weapon(void);
		const std::string &getType(void) const;
		void setType(std::string type);
	private :
		std::string type;
};

#endif