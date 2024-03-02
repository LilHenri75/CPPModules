/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:41:18 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 11:02:48 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal {
	public:
		// Constructors
		Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		~Dog();
		Dog &operator=(const Dog &copy);
		// Member functions
		void makeSound() const;
};