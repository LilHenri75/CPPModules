/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:58:24 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 11:01:31 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <cstdlib>

Brain::Brain()
{
	const std::string set[] = {
		"Sleeping",
		"Eating",
		"Running",
		"Playing",
		"Drinking"
	};
	for (int i = 0; i < 100; i++)
		this->ideas[i] = set[rand() % 5];
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &copy) {
	if (this != &copy) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

const std::string& Brain::getIdea(int index) const {
	return this->ideas[index];
}