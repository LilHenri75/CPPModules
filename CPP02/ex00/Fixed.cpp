/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:42:11 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/23 12:04:52 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointNumber = 0;
	return ;
}

// Copy constructor
// The copy constructor is a constructor which creates an object by initializing it with
// an object of the same class, which has been created previously.
Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

// Destructor
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

// Copy assignment operator overload
// default behavior is fine for simple classes, but it can lead to problems for
// classes that manage resources such as memory, file handles, or network connections
Fixed & Fixed::operator=(Fixed const & src) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(src.getRawBits());
	return *this;
}

// Function to return the value of the fixed point number
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointNumber;
}

// Function to set the value of the fixed point number
void Fixed::setRawBits(const int raw) {
	this->fixedPointNumber = raw;
	return ;
}