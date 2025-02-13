/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:33:55 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/13 17:41:51 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Construct" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Cpy" << std::endl;
	
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Cpy Operator" << std::endl;
	if (this != &other)
	{
		
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destruct" << std::endl;
}