/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:45:34 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/20 16:45:35 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(const std::string type);
		~Weapon();

		const std::string	&getType() const;
		void	setType(std::string type);
};

#endif