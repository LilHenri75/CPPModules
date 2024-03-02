/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:19:40 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 11:10:04 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./main.hpp"
#include "./ICharacter.hpp"

class AMateria {
	public:
		// Constructors, destructor, and operator=
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		virtual ~AMateria();
		AMateria &operator=(const AMateria &copy);
		// Getters and setters
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
	protected:
		std::string type;
};