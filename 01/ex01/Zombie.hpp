/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:44:55 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/20 16:44:56 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string name;
	
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie*	zombieHorde( int N, std::string name );

#endif