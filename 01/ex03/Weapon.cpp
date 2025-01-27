/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:45:38 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/27 12:22:31 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type): _type(type)
{
	std::cout << type << " is ready for use!!" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Leaving Weapon 💥" << std::endl;
	std::cout << std::endl;
}

const std::string&	Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}