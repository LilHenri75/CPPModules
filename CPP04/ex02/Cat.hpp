/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:37:45 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 12:08:55 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	public:
		// Constructors, destructor and operator=
		Cat();
		Cat(std::string type);
		Cat(const Cat& other);
		~Cat();
		Cat &operator=(const Cat &copy);
		// Getter
		Brain *getBrain() const;
		// Member functions
		virtual void makeSound() const;
	private:
		Brain *brain;
};