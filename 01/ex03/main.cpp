/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:45:46 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/27 12:21:00 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club"); // not possible to change the type if there is no setWeapon before
		jim.attack();
	}
	{
		Weapon excalibur = Weapon("Excalibur");
		HumanB arthur("Arthur");
		arthur.attack();
		arthur.setWeapon(excalibur);
		arthur.attack();
	}
	return 0;
}