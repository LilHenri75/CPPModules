/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:41:18 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 11:34:07 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	public:
		// Constructors
		Dog();
		Dog(std::string type);
		Dog(const Dog &other);
		~Dog();
		Dog &operator=(const Dog &copy);
		// Getter
		Brain *getBrain() const;
		// Member functions
		virtual void makeSound() const;
	private:
		Brain *brain;
};