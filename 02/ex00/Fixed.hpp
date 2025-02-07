/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/07 13:49:31 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/07 19:44:58 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int	_value;
		static const int _fractionalBits = 8;
	public:
		// Default
		Fixed();
		// Copy Constructor
		Fixed(const Fixed &other);
		// Copy Assignment Operator Overload
		Fixed& operator=(const Fixed &other);
		// Destructor
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};



#endif