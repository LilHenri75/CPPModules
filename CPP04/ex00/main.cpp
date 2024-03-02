/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:42:10 by hebernar          #+#    #+#             */
/*   Updated: 2024/03/02 10:56:25 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* i = new Cat("CAT");
	const Animal* j = new Dog("DOG");
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat("WRONG CAT");

	std::cout << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << k->getType() << std::endl;
	std::cout << l->getType() << std::endl << std::endl;
	meta->makeSound();
	i->makeSound();
	j->makeSound();
	k->makeSound();
	l->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;
}