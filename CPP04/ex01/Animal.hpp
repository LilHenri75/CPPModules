/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 16:39:32 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 12:12:39 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal {
	public:
		// Constructors, destructor and operator=
		Animal();
		Animal(std::string type);
		Animal(const Animal &other);
		virtual ~Animal();
		Animal &operator=(const Animal &copy);
		// Getters
		std::string getType() const;
		// Member functions
		virtual void makeSound() const;
	protected:
		std::string type;
};