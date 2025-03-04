/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 11:08:46 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/04 10:12:02 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "  FragTrap construct Default" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	this->max_HP = this->get_hit_points();
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	std::cout << "  FragTrap construct" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	this->max_HP = this->get_hit_points();
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "  FragTrap cpy construct" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	std::cout << "  FragTrap cpy operator" << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "  FragTrap DESTRUCT " << this->get_name() << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->get_energy_points() == 0)
	{
		std::cout << "  FragTrap doesn't have energy to raise its hand :(" << std::endl;
		return ;
	}
	if (this->get_hit_points() == 0)
	{
		std::cout << "  FragTrap is dead! No high five with a body :/" << std::endl;
		return ;
	}
	std::cout << "  WE ARE THE CHAMPIONS MY FRIEND! 🙏 (high five)" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->get_energy_points() == 0)
	{
		std::cout << "  FragTrap " << this->get_name() << " is out of energy 🪫" << std::endl;
		return ;
	}
	else if (this->get_hit_points() == 0)
	{
		std::cout << "  FragTrap " << this->get_name() << " is DEAD! 🪦" << std::endl;
		return ;
	}
	this->set_energy_points(this->get_energy_points() - 1);
	std::cout << "  FragTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attack_damage() << " points of damage!" << std::endl;
}