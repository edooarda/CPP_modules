/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 16:28:35 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/11 18:25:48 by edribeir      ########   odam.nl         */
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
		
		// Comparisson Operators
		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		// Arithmetic Operators
		Fixed operator+ (const Fixed &other);
		Fixed operator- (const Fixed &other);
		Fixed operator* (const Fixed &other);
		Fixed operator/ (const Fixed &other);
		
		// Increment
		Fixed& operator++(); //a++
		Fixed operator++(int); //++a

		// Decrement
		// a--
		// --a

		// Comparisson MAX and MIN, overloaded member functions
		// a < b MIN
		// a < b const MIN

		// a > b MAX
		// a > b const  MAX
		
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

