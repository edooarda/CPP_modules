/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 16:28:39 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/12 09:31:17 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	// Fixed a;

	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	Fixed a;
	Fixed b(3.0f);
	Fixed c = a + b; 
	std::cout << c << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}