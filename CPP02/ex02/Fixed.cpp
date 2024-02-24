/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:30:25 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/23 14:29:06 by hebernar         ###   ########.fr       */
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
Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

// Int constructor
// The int constructor takes an integer and stores it as a fixed point number
// It uses the bitwise left shift operator to move the bits of the integer to the left by the number of fractional bits
// The 8 bits to the right of the decimal point are the fractional part of the number
Fixed::Fixed(int const value) {
	std::cout << "int constructor called" << std::endl;
	this->fixedPointNumber = value << this->fractionalBits;
}

// Float constructor
// The float constructor takes a floating point number and stores it as a fixed point number
// It uses the roundf function to round the floating point number to the nearest integer
// It then multiplies the rounded number by 2 raised to the power of the number of fractional bits
Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNumber = roundf(value * (1 << this->fractionalBits));
}

// Destructor
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

// Copy assignment operator
// Performs a copy of the Fixed object
Fixed & Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(rhs.getRawBits());
	return *this;
}

// Member function to get the raw bits of the fixed point number
int Fixed::getRawBits(void) const {
	return this->fixedPointNumber;
}

// Member function to set the raw bits of the fixed point number
void Fixed::setRawBits(const int raw) {
	this->fixedPointNumber = raw;
	return ;
}

// Member function to convert the fixed point number to a floating point number
float Fixed::toFloat(void) const {
	return (float)this->fixedPointNumber / (1 << this->fractionalBits);
}

// Member function to convert the fixed point number to an integer
int Fixed::toInt(void) const {
	return this->fixedPointNumber >> this->fractionalBits;
}

// Function to overload the << operator
// Takes an output stream and a fixed point number as arguments
// It converts the fixed point number to a floating point number and outputs it to the output stream
std::ostream & operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

// Comparison operators >, <, >=, <=, == and !=
bool Fixed::operator>(Fixed const & src) const {
	return this->fixedPointNumber > src.getRawBits();
}

bool Fixed::operator<(Fixed const & src) const {
	return this->fixedPointNumber < src.getRawBits();
}

bool Fixed::operator>=(Fixed const & src) const {
	return this->fixedPointNumber >= src.getRawBits();
}

bool Fixed::operator<=(Fixed const & src) const {
	return this->fixedPointNumber <= src.getRawBits();
}

bool Fixed::operator!=(Fixed const & src) const {
	return this->fixedPointNumber != src.getRawBits();
}

bool Fixed::operator==(Fixed const & src) const {
	return this->fixedPointNumber == src.getRawBits();
}

// Arithmetic operators +, -, *, and /
// +
Fixed Fixed::operator+(Fixed const & src) const {
	Fixed result;

	result.setRawBits(this->fixedPointNumber + src.getRawBits());
	return result;
}

// -
Fixed Fixed::operator-(Fixed const & src) const {
	Fixed result;

	result.setRawBits(this->fixedPointNumber - src.getRawBits());
	return result;
}

// *
Fixed Fixed::operator*(Fixed const & src) const {
	Fixed result;

	result.setRawBits((this->fixedPointNumber * src.getRawBits()) >> this->fractionalBits);
	return result;
}

// /
Fixed Fixed::operator/(Fixed const & src) const {
	Fixed result;

	result.setRawBits((this->fixedPointNumber << this->fractionalBits) / src.getRawBits());
	return result;
}

// Increment/decrement operators
// Pre-increment: the value is incremented and then returned
Fixed& Fixed::operator++(void) {
	this->fixedPointNumber++;
	return *this;
}

// Post-increment: a copy of the value is returned and the original value is incremented
Fixed Fixed::operator++(int) {
	Fixed result(*this);
	operator++();
	return result;
}

// Pre-decrement: the value is decremented and then returned
Fixed& Fixed::operator--(void) {
	this->fixedPointNumber--;
	return *this;
}

// Post-decrement: a copy of the value is returned and the original value is decremented
Fixed Fixed::operator--(int) {
	Fixed result(*this);
	operator--();
	return result;
}

// Static member functions
// min: returns the smallest of two fixed point numbers
Fixed& Fixed::min(Fixed &x, Fixed &y) {
	if (x < y)
		return x;
	return y;
}

// const min: returns the smallest of two constant fixed point numbers
Fixed const & Fixed::min(Fixed const &x, Fixed const &y) {
	if (x < y)
		return x;
	return y;
}

// max: returns the greatest of two fixed point numbers
Fixed& Fixed::max(Fixed &x, Fixed &y) {
	if (x > y)
		return x;
	return y;
}

// const max: returns the greatest of two constant fixed point numbers
Fixed const & Fixed::max(Fixed const &x, Fixed const &y) {
	if (x > y)
		return x;
	return y;
}
