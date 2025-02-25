/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/25 18:04:03 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/25 18:24:01 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Construct ScavTrap Default" << std::endl;
	this->name = "Default";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "Cpy Construct ScavTrap";
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.energy_points;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "Cpy Operator ScavTrap" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.energy_points;
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap is being Desconstruct" << std::endl;
}

void	ScavTrap::guardGate() // Should check if there is energy or it is alive?
{
	std::cout << "ScavTrap "<< this->get_name() << " is now in Gate keeper mode" << std::endl;
}