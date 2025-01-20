/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:45:14 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/20 16:45:58 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	
	std::cout << "HumanA ready" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA says Bye" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
}
