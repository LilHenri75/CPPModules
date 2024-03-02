/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:42:10 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 11:07:06 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include <iomanip>

int main()
{
	Animal animals;
	animals.makeSound();
/*
	for (int i = 0; i < 10; i++) {
		if (i >= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 100; i++) {
		std::cout << "Idea [" << i << "] from Cat[0]: " << ((Cat *)animals[0])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Cat[1]: " << ((Cat *)animals[1])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Cat[2]: " << ((Cat *)animals[2])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Cat[3]: " << ((Cat *)animals[3])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Cat[4]: " << ((Cat *)animals[4])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Dog[0]: " << ((Dog *)animals[5])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Dog[1]: " << ((Dog *)animals[6])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Dog[2]: " << ((Dog *)animals[7])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Dog[3]: " << ((Dog *)animals[8])->getBrain()->getIdea(i) << std::endl;
		std::cout << "Idea [" << i << "] from Dog[4]: " << ((Dog *)animals[9])->getBrain()->getIdea(i) << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		delete animals[i];
	}*/
}