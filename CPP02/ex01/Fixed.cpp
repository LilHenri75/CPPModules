/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:30:25 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/06 18:36:18 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->fixedPointNumber = 0;
	return ;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const value) {
	std::cout << "int constructor called" << std::endl;
	this->fixedPointNumber = value << this->fractionalBits;
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNumber = roundf(value * (1 << this->fractionalBits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const {
	return this->fixedPointNumber;
}

void Fixed::setRawBits(const int raw) {
	this->fixedPointNumber = raw;
	return ;
}

float Fixed::toFloat(void) const {
	return (float)this->fixedPointNumber / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const {
	return this->fixedPointNumber >> this->fractionalBits;
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}