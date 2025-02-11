/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 16:28:32 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/11 18:26:04 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)  : _value(copy._value)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->_value = copy._value;
	}
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

// custom constructor
Fixed::Fixed(const int constInt)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_value = constInt << this->_fractionalBits;
}

// custom constructor
Fixed::Fixed(const float constFloat)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(constFloat * (1 << this->_fractionalBits));
}

int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called\n";
	return (this->_value);
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "SET member function called\n";
	this->_value = raw;
}

float Fixed::toFloat( void ) const
{
	float	new_value;

	new_value = (float)this->getRawBits() / (1 << this->_fractionalBits);
	return (new_value);
}

int Fixed::toInt( void ) const
{
	int	new_value;

	new_value = this->getRawBits() / (1 << this->_fractionalBits);
	return (new_value);
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return (out);
}


// Comparisson Operators
bool Fixed::operator> (const Fixed &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator< (const Fixed &other) const
{
	if (this->getRawBits() < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>= (const Fixed &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (true);
	else if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<= (const Fixed &other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (true);
	else if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator== (const Fixed &other) const
{
	if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!= (const Fixed &other) const
{
	if (this->getRawBits() != other.getRawBits())
		return (true);
	return (false);
}


// Arithmetic Operators
Fixed Fixed::operator+ (const Fixed &other)
{
	return(Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator- (const Fixed &other)
{
	return(Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other)
{
	if (other.getRawBits() == 0)
	{
		std::cout << "ERROR: Division by 0 is not allowed!" << std::endl;
		return(-1);
	}
	return (Fixed(this->toFloat() / other.toFloat()));
}

// Increments
// Pre
Fixed& Fixed::operator++()
{
	int value;

	value = this->getRawBits() + 1;
	this->setRawBits(value);
	return (*this);
}

// Post
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->operator++();
	return (temp);
}