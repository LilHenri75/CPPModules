/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:37:45 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 10:41:05 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Cat : public Animal {
	public:
		// Constructors, destructor and operator=
		Cat();
		Cat(std::string type);
		Cat(const Cat& other);
		~Cat();
		Cat &operator=(const Cat &copy);
		// Member functions
		void makeSound() const;
};