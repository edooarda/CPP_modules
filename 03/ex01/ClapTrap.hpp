/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/13 16:34:00 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/03 13:58:13 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <climits>

class ClapTrap{
	protected:
		std::string	name;
		int			hit_points; // represents the health of the ClapTrap
		int			energy_points;
		int			attack_damage;
		int			max_HP;
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
		int get_max_HP() const;

		void set_hit_points(int amount);
		void set_energy_points(int amount);
		void set_attack_damage(int amount);


		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif