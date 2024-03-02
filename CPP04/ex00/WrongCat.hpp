/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:45:57 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/01 10:46:18 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		// Constructors
		WrongCat();
		WrongCat(std::string type);
		WrongCat(const WrongCat& other);
		~WrongCat();
		WrongCat& operator=(const WrongCat& rhs);
		// Member functions
		void makeSound() const;
};