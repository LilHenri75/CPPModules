/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:27:44 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 13:13:51 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./main.hpp"

class Cure : public AMateria {
	public:
		// Constructors, destructor, and operator=
		Cure();
		Cure(const Cure &other);
		~Cure();
		Cure &operator=(const Cure &copy);
		// Member functions
		Cure *clone() const;
		void use(ICharacter &target);
};