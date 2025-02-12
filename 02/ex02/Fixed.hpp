/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 16:28:35 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/12 14:53:38 by edribeir      ########   odam.nl         */
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
		Fixed& operator--(); // a--
		Fixed operator--(int); // --a

		// Comparisson MAX and MIN, overloaded member functions
		static Fixed& min(Fixed& a, Fixed& b); // a < b MIN
		static const Fixed& min(const Fixed& a, const Fixed& b); // a < b const MIN

		static Fixed& max(Fixed& a, Fixed& b);// a > b MAX
		static const Fixed& max(const Fixed& a, const Fixed& b);// a > b const  MAX
		
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

