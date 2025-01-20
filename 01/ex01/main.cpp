/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:44:43 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/20 16:44:44 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *firstHorde = zombieHorde(5, "zombieHungry");
	delete [] firstHorde;

	Zombie *secondHorde = zombieHorde(10, "noBrainers");
	delete [] secondHorde;
}