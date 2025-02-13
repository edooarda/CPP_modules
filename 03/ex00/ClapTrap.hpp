/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:34:00 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/13 17:39:56 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		std::string _name;
		int			_hit_points = 10;
		int			_energy_points = 10;
		int			_attack_damage = 0;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		//get for name
		//get for hit
		//get for energy
		//get for attack

		// set for name
		// set for hit
		// set for energy
		// set for attack

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif