/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:34:00 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/14 14:19:11 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	private:
		std::string _name;
		int			_hit_points; // represents the health of the ClapTrap
		int			_energy_points;
		int			_attack_damage;
	public:
		ClapTrap();
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		ClapTrap(const std::string& name);
		std::string get_name() const;
		int get_hit_points() const;
		int get_energy_points() const;
		int get_attack_damage() const;

		void set_hit_points(int amount);
		void set_energy_points(int amount);
		void set_attack_damage(int amount);


		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif