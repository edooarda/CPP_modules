/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:33:23 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/03 14:44:20 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void printall(ClapTrap &insert)
{
	std::cout << "Name: " << insert.get_name() << std::endl;
	std::cout << "Attack: " << insert.get_attack_damage() << std::endl;
	std::cout << "Energy: " << insert.get_energy_points() << std::endl;
	std::cout << "Life: " << insert.get_hit_points() << std::endl;
	std::cout << "MAX LIFE: " << insert.get_max_HP() << std::endl;
}

int main()
{
	{
		std::cout << "\n------------\n\n";
		FragTrap	first;
		printall(first);
	}
	{
		std::cout << "\n------------\n\n";
		FragTrap	a("Batata");
		printall(a);
	}
	{
		std::cout << "\n------------\n\n";
		FragTrap	a;
		a.takeDamage(30);
		FragTrap	b(a);
		printall(b);
	}
	{
		std::cout << "\n------------\n\n";
		FragTrap	a("João");
		FragTrap	b;
		a.takeDamage(50);
		b = a;
		printall(b);
	}
	{
		std::cout << "\n------------\n\n";
		ClapTrap	a("Arroz");
		ScavTrap	b("Feijão");
		FragTrap	c("Carne");
		a.attack(b.get_name());
		b.attack(a.get_name());
		a.takeDamage(20);
		// a.attack(c.get_name());
		c.attack(a.get_name());
		a.takeDamage(30);

		c.highFivesGuys();
		// b.guardGate();
		// printall(b);
		printall(c);
		// b.takeDamage(100);
		// b.guardGate();
		c.takeDamage(100);
		c.highFivesGuys();
		printall(b);
		printall(a);
		printall(c);
	}
}
