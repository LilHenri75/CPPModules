/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:57:27 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 11:29:09 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain {
	public:
		// Constructors, destructor, operator=
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain &operator=(const Brain &copy);
		// Getters
		const std::string &getIdea(int index) const;
	private:
		std::string ideas[100];
};