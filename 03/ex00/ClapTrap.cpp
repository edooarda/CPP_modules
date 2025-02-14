/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:33:55 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/14 14:15:46 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Construct" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Cpy" << std::endl;
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
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
	std::cout << "Destruct" << std::endl;
}

// custom construct 
ClapTrap::ClapTrap(const std::string& name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "name construct" << std::endl;
}

// Getters
std::string ClapTrap::get_name() const
{
	return(this->_name);
}

int ClapTrap::get_hit_points() const
{
	return(this->_hit_points);
}

int ClapTrap::get_energy_points() const
{
	return(this->_energy_points);
}

int ClapTrap::get_attack_damage() const
{
	return(this->_attack_damage);
}

// Setters
void ClapTrap::set_hit_points(int amount)
{
	this->_hit_points = amount;
}

void ClapTrap::set_energy_points(int amount)
{
	this->_energy_points = amount;
}

void ClapTrap::set_attack_damage(int amount)
{
	this->_attack_damage = amount;
}



void ClapTrap::attack(const std::string& target)
{
	// -1 of energy for each attack
	// amount of damage
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (get_energy_points() == 0 || get_hit_points == 0)
		std::cout << this->get_name() << "doesn't have any energy or maybe it is dead 😵" << std::endl;
	else
	{
		if (get_hit_points() == 10)
			std::cout << this->get_name() << "is with Full life! Doesnt need Repair ✌️" << std::endl;
	}
}