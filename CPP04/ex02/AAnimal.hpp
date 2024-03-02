/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:37:33 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 11:39:19 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AAnimal {
	public:
		// Constructors, destructor and operator=
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &copy);
		// Getters
		std::string getType() const;
		// Member functions
		virtual void makeSound() const = 0;

	protected:
		std::string type;
};