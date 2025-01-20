/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:44:04 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/20 16:44:05 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	heap_zombie;

	randomChump("STACK");
	heap_zombie = newZombie("HEAP");
	heap_zombie->announce();
	delete heap_zombie;
}