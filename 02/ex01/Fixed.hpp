/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 09:50:47 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/10 15:25:06 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int	_value;
		const int	_fractionalBits = 8;
	public:
		// default construct
		Fixed();
		// Copy Constructor
		Fixed(const Fixed &copy);
		// Copy Operator Overload
		Fixed& operator=(const Fixed &copy);
		// destructor
		~Fixed();

		Fixed(const int constInt);
		Fixed(const float constFloat);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);


#endif