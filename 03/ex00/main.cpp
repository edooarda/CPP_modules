/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:33:23 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/03 16:54:35 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	{
		ClapTrap	a; // default
	}
	{
		std::cout << "\n ---------------- \n";
		ClapTrap	a("Hell");
		ClapTrap	b;

		b = a;
		std::cout << "name: " << b.get_name() << std::endl;
	}
	{
		std::cout << "\n ---------------- \n";
		
		ClapTrap	robot("Android");
		ClapTrap	organic("Apple");

		robot.attack(organic.get_name()); //1
		robot.attack(organic.get_name()); //2
		robot.beRepaired(10); //3
		robot.beRepaired(0); // 4
		robot.takeDamage(5);
		std::cout << "this is how much life do you have now: " << robot.get_hit_points() << std::endl;
		robot.beRepaired(2); //5
		std::cout << "this is how much life do you have now: " << robot.get_hit_points() << std::endl;
		robot.beRepaired(50); //6
		std::cout << "this is how much life do you have now: " << robot.get_hit_points() << std::endl;
		robot.beRepaired(0); //7
		std::cout << "this is how much life do you have now: " << robot.get_hit_points() << std::endl;
		organic.attack(robot.get_name());
		robot.attack(organic.get_name()); //8
		robot.attack(organic.get_name());// 9
		robot.attack(organic.get_name()); //10
		robot.attack(organic.get_name());// 11
		robot.attack(organic.get_name()); //12

		std::cout << "\n	Dead Body\n" << std::endl;
		robot.takeDamage(15);
		robot.takeDamage(-1);
	}
}