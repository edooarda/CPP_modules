/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 09:50:53 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/10 16:22:30 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)  : _value(copy._value)
{
	std::cout << "Copy constructor called" << std::endl;
	// *this = copy; // this is the other form, it makes the print output to be the same as example
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_value = copy._value;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// custom constructor
Fixed::Fixed(const int constInt)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = constInt << this->_fractionalBits;
}

// custom constructor
Fixed::Fixed(const float constFloat)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(constFloat * (1 << this->_fractionalBits));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "SET member function called\n";
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	float	new_value;

	new_value = (float)this->_value / (1 << this->_fractionalBits);
	return (new_value);
}

int Fixed::toInt( void ) const
{
	int	new_value;

	new_value = this->_value >> this->_fractionalBits;
	return (new_value);
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}