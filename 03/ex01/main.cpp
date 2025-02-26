/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edooarda <edooarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:33:23 by edribeir          #+#    #+#             */
/*   Updated: 2025/02/26 22:52:13 by edooarda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printall(ClapTrap &insert)
{
	std::cout << "Name: " << insert.get_name() << std::endl;
	std::cout << "Attack: " << insert.get_attack_damage() << std::endl;
	std::cout << "Energy: " << insert.get_energy_points() << std::endl;
	std::cout << "Life: " << insert.get_hit_points() << std::endl;
}

int main()
{
	// ClapTrap	robot("Android");
	// ClapTrap	organic("Apple");

	// robot.attack(organic.get_name()); //1
	// robot.attack(organic.get_name()); //2
	// robot.beRepaired(10); //3
	// robot.beRepaired(0); // 4
	// robot.takeDamage(5);
	// robot.beRepaired(2); //5
	// robot.beRepaired(50); //6
	// robot.beRepaired(0); //7
	// organic.attack(robot.get_name());
	// robot.attack(organic.get_name()); //8
	// robot.attack(organic.get_name());// 9
	// robot.attack(organic.get_name()); //10
	// robot.attack(organic.get_name());// 11
	// robot.attack(organic.get_name()); //12

	// std::cout << "\n	Dead Body\n" << std::endl;
	// robot.takeDamage(15);
	// robot.takeDamage(-1);
	{
		std::cout << "\n------------\n\n";
		ScavTrap	first;
		printall(first);
	}
	{
		std::cout << "\n------------\n\n";
		ScavTrap	a("Batata");
		printall(a);
	}
	{
		std::cout << "\n------------\n\n";
		ScavTrap	a;
		a.takeDamage(20);
		ScavTrap	b(a);
		printall(b);
	}
	{
		std::cout << "\n------------\n\n";
		ScavTrap	a("João");
		ScavTrap	b;
		a.takeDamage(50);
		b = a;
		printall(b);
	}
	{
		std::cout << "\n------------\n\n";
		ClapTrap	a("Arroz");
		ScavTrap	b("Feijão");
		a.attack(b.get_name());
		b.attack(a.get_name());
		a.takeDamage(20);

		b.guardGate();
		printall(b);
		b.takeDamage(100);
		b.guardGate();
		printall(b);
		printall(a);
	}
}
