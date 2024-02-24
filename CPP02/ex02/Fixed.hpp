/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:39:47 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/23 14:25:28 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

// Add public member functions to your class to overload the following operators:
// • The 6 comparison operators: >, <, >=, <=, == and !=.
// • The 4 arithmetic operators: +, -, *, and /.
// • The 4 increment/decrement (pre-increment and post-increment, pre-decrement and post-decrement) operators, that will increase or decrease the fixed-point value from the smallest representable ε such as 1 + ε > 1.
// Add these four public overloaded member functions to your class:
// • A static member function min that takes as parameters two references on fixed-point numbers, and returns a reference to the smallest one.
// • A static member function min that takes as parameters two references to constant fixed-point numbers, and returns a reference to the smallest one.
// • A static member function max that takes as parameters two references on fixed-point numbers, and returns a reference to the greatest one.
// • A static member function max that takes as parameters two references to constant fixed-point numbers, and returns a reference to the greatest one.

class Fixed {
	private:
		int					fixedPointNumber;
		static const int	fractionalBits = 8;
	public:
		// Constructors and destructors
		Fixed();
		Fixed(Fixed const & src);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();
		// Conversion functions
		float toFloat( void ) const;
		int toInt( void ) const;
		// Assignment operator
		Fixed & operator=(Fixed const & src);
		// Member functions
		int getRawBits(void) const;
		void setRawBits(int const raw);
		// Comparison operators
		bool operator>(Fixed const & src) const;
		bool operator<(Fixed const & src) const;
		bool operator>=(Fixed const & src) const;
		bool operator<=(Fixed const & src) const;
		bool operator!=(Fixed const & src) const;
		bool operator==(Fixed const & src) const;
		// Arithmetic operators
		Fixed operator+(Fixed const & src) const;
		Fixed operator-(Fixed const & src) const;
		Fixed operator*(Fixed const & src) const;
		Fixed operator/(Fixed const & src) const;
		// Increment/decrement operators
		Fixed& operator++(void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);
		// Member functions
		static Fixed& min(Fixed &x, Fixed &y);
		static Fixed const & min(Fixed const &x, Fixed const &y);
		static Fixed& max(Fixed &x, Fixed &y);
		static Fixed const & max(Fixed const &x, Fixed const &y);
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif