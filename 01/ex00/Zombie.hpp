/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/26 11:37:46 by edooarda      #+#    #+#                 */
/*   Updated: 2025/01/20 16:44:40 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif