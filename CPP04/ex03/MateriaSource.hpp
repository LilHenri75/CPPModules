/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:28:29 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 13:14:12 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./main.hpp"

class MateriaSource : public IMateriaSource {
	public:
		// Constructors, destructor, and operator=
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		~MateriaSource();
		MateriaSource &operator=(MateriaSource const &copy);
		// Member functions
		void learnMateria(AMateria *materia);
		AMateria *createMateria(std::string const &type);
	private:
		AMateria *materia[4];
};