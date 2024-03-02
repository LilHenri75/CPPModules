/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:54:36 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 13:14:06 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "./main.hpp"

class IMateriaSource {
	public:
		virtual ~IMateriaSource(void) {}
		virtual void learnMateria(AMateria *materia) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};