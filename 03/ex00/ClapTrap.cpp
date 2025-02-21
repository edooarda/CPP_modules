/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:33:55 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/21 15:05:20 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Construct" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Cpy Construct" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Cpy Operator" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destruct "<< this->get_name() << std::endl;
}

// custom construct
ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Construct " << name << std::endl;
}

// Getters
std::string	ClapTrap::get_name() const
{
	return(this->_name);
}

int	ClapTrap::get_hit_points() const
{
	return(this->_hit_points);
}

int	ClapTrap::get_energy_points() const
{
	return(this->_energy_points);
}

int	ClapTrap::get_attack_damage() const
{
	return(this->_attack_damage);
}

// Setters
void	ClapTrap::set_hit_points(int amount)
{
	this->_hit_points = amount;
}

void	ClapTrap::set_energy_points(int amount)
{
	this->_energy_points = amount;
}

void	ClapTrap::set_attack_damage(int amount)
{
	this->_attack_damage = amount;
}


bool	ClapTrap::isEnergyorHitpoints()
{
	if (get_energy_points() == 0)
	{
		std::cout << this->get_name() << " doesn't have any energy 🪫" << std::endl;
		return false;
	}
	else if(get_hit_points() == 0)
	{
		std::cout << this->get_name() << " is a death body, leave it alone! 🪦" << std::endl;
		return false;
	}
	return true;
}

void	ClapTrap::attack(const std::string& target) // -1 to energy
{
	if (isEnergyorHitpoints() == false)
		return ;
	this->set_energy_points(this->get_energy_points() - 1);
	std::cout << "ClapTrap "<< this->get_name() << " attacks " << target << " , causing " << this->get_attack_damage() << " points of damage!" << std::endl;
	takeDamage(0);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount <= 0 && this->get_hit_points() >= 0)
	{
		std::cout << "This attack was to weak 😪 " << this->get_name() << " received " << amount << " damage" << std::endl;
		return ;
	}
	else if (amount > 10 && this->get_hit_points() >= 0)
	{
		std::cout << "FATALITY! This was enough to kill ☠️ " << this->get_name() << ". Its received " << amount << " damage" << std::endl;
		return ;
	}
	else
	{
		if (isEnergyorHitpoints() == false)
			return ;
		else
		{
			std::cout << "Ouch, This attack hits hard! 😫 " << this->get_name() << " received " << amount << " damage " << std::endl;
			if (this->_hit_points - amount <= 0)
				this->set_hit_points(0);
			else
				this->set_hit_points(this->get_hit_points() - amount);
			return ;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount) // -1 to energy
{
	if (ClapTrap::isEnergyorHitpoints() == false)
		return ;
	else
	{
		if (get_hit_points() == 10)
			std::cout << this->get_name() << " is with Full life! Doesnt need Repair ✌️" << std::endl;
		else
		{
			this->set_energy_points(this->get_energy_points() - 1);
			if (this->_hit_points + amount > 10)
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
