/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/25 18:04:03 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/04 10:01:47 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() // default
{
	std::cout << " ScavTrap Construct Default" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->max_HP = this->get_hit_points();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	std::cout << " ScavTrap Construct "<< name << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	this->max_HP = this->get_hit_points();
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << " ScavTrap Cpy Construct" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << " ScavTrap Cpy Operator" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << " ScavTrap is being Desconstruct" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (this->get_energy_points() == 0)
	{
		std::cout << " ScavTrap " << this->get_name() << "is out energy, it will not guard a thing" << std::endl;
		return ;
	}
	else if (this->get_hit_points() == 0)
	{
		std::cout << " ScavTrap " << this->get_name() << " died protecting the gates with honor!" << std::endl;
		return ;
	}
	std::cout << " ScavTrap "<< this->get_name() << " is now in Gate Keeper mode. YOU SHALL NOT PASS!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->get_energy_points() == 0)
	{
		std::cout << " ScavTrap " << this->get_name() << " is out of energy 🪫" << std::endl;
		return ;
	}
	else if (this->get_hit_points() == 0)
	{
		std::cout << " ScavTrap " << this->get_name() << " is DEAD! 🪦" << std::endl;
		return ;
	}
	this->set_energy_points(this->get_energy_points() - 1);
	std::cout << " ScavTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attack_damage() << " points of damage!" << std::endl;
}