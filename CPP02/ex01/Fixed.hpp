/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hebernar <hebernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 01:23:55 by hebernar          #+#    #+#             */
/*   Updated: 2024/02/06 18:31:16 by hebernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int	fixedPointNumber;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		Fixed(Fixed const & src);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed & operator=(Fixed const & rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif