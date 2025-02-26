/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edooarda <edooarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:33:55 by edribeir          #+#    #+#             */
/*   Updated: 2025/02/26 20:43:43 by edooarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Construct" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Cpy Construct" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Cpy Operator" << std::endl;
	if (this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destruct "<< this->get_name() << std::endl;
}

// custom construct
ClapTrap::ClapTrap(const std::string& name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Construct " << name << std::endl;
}

// Getters
std::string	ClapTrap::get_name() const
{
	return("ClapTrap " + this->name);
}

int	ClapTrap::get_hit_points() const
{
	return(this->hit_points);
}

int	ClapTrap::get_energy_points() const
{
	return(this->energy_points);
}

int	ClapTrap::get_attack_damage() const
{
	return(this->attack_damage);
}

// Setters
void	ClapTrap::set_hit_points(int amount)
{
	this->hit_points = amount;
}

void	ClapTrap::set_energy_points(int amount)
{
	this->energy_points = amount;
}

void	ClapTrap::set_attack_damage(int amount)
{
	this->attack_damage = amount;
}

void	ClapTrap::attack(const std::string& target) // -1 to energy
{
	if (this->get_energy_points() == 0)
	{
		std::cout << this->get_name() << " doesn't have any energy 🪫" << std::endl;
		return ;
	}
	else if (this->get_hit_points() == 0)
	{
		std::cout << this->get_name() << " is a death body, leave it alone! 🪦" << std::endl;
		return ;
	}
	this->set_energy_points(this->get_energy_points() - 1);
	std::cout << this->get_name() << " attacks " << target << ", causing " << this->get_attack_damage() << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->get_hit_points() == 0)
	{
		std::cout << this->get_name() << " is a dead body, leave it alone! 🪦" << std::endl;
		return ;
	}
	if (amount == 0)
	{
		std::cout << "This attack was to weak 😪 " << this->get_name() << " received " << amount << " damage" << std::endl;
	}
	else if (amount > 10)
	{
		std::cout << "FATALITY! This was enough to kill 💀 " << this->get_name() << ". Its received " << amount << " damage" << std::endl;
		this->set_hit_points(0);
	}
	else
	{
		std::cout << "Ouch, This attack hits hard! 😫 " << this->get_name() << " received " << amount << " damage " << std::endl;
		if (this->hit_points - amount <= 0)
			this->set_hit_points(0);
		else
			this->set_hit_points(this->get_hit_points() - amount);
	}
}

void	ClapTrap::beRepaired(unsigned int amount) // -1 to energy
{
	if (this->get_energy_points() == 0)
	{
		std::cout << this->get_name() << " doesn't have any energy 🪫" << std::endl;
		return ;
	}
	else
	{
		this->set_energy_points(this->get_energy_points() - 1);
		if (this->get_hit_points() == 10)
			std::cout << this->get_name() << " is with Full life! 🎉 Not necessary repair." << std::endl;
		else
		{
			if (this->get_hit_points() + amount > 10)
			{
				std::cout << this->get_name() << " was repaired until full life 🔋" << std::endl;
				this->set_hit_points(10);
			}
			else
			{
				std::cout << this->get_name() << " repaired " << amount << " points" << std::endl;
				this->set_hit_points(this->get_hit_points() + amount);
			}
		}
	}
}
