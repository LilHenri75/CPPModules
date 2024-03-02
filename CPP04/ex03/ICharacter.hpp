/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:28:02 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 13:23:45 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./main.hpp"

class	AMateria;

class ICharacter {
	public:
		// Destructor
		virtual ~ICharacter() {}
		// Member functions
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *materia) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};