/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:45:21 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/27 12:05:03 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(nullptr)
{
	std::cout << name << " is READY!" << std::endl;
	std::cout << std::endl;
}

HumanB::~HumanB()
{
	std::cout << std::endl;
	std::cout << this->_name << " says BYE 👋" << std::endl;
}

void	HumanB::attack()
{
	if (this->_weapon == nullptr)
		std::cout << this->_name << " has no weapon, time to use the fists 🤜 🤛 👊" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}