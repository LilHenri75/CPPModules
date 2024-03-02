/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:27:44 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 13:13:56 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./main.hpp"

class Ice : public AMateria {
	public:
		// Constructors, destructor, and operator=
		Ice();
		Ice(const Ice &other);
		~Ice();
		Ice &operator=(const Ice &copy);
		// Member functions
		Ice *clone() const;
		void use(ICharacter &target);
};