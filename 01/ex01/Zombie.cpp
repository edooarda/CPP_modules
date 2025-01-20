/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:44:51 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/20 16:44:52 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// construct
Zombie::Zombie()
{
}

// destruct

Zombie::~Zombie()
{
	std::cout << this->name << " was killed" << std::endl;
}

void	Zombie::setName(std::string denomination)
{
	this->name = denomination;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}