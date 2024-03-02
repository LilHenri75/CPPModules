/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:54:31 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 13:25:05 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./main.hpp"
#include "./AMateria.hpp"

class Character : public ICharacter {
	public:
		// Constructors, destructor, and operator=
		Character();
		Character(std::string const &name);
		Character(const Character &other);
		~Character();
		Character &operator=(const Character &copy);
		// Getter
		std::string const &getName() const;
		// Member functions
		void equip(AMateria *materia);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
	private:
		std::string name;
		AMateria *materia[4];
};
