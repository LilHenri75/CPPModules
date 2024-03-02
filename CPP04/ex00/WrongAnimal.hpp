/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:44:46 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 10:45:43 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class WrongAnimal {
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &copy);
		// Getters
		std::string getType() const;
		// Member functions
		void makeSound() const;

	protected:
		std::string type;
};