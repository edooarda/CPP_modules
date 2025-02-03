/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/03 12:15:00 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/03 18:15:33 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Hi Harl, How can I help you today? 😊\n" << std::endl;
}

Harl::~Harl()
{
	std::cout << "\n👋 Bye bye Harl!" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "\n\033[32m[DEBUG]\033[0m" << std::endl;
	std::cout << "	I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "\n\033[93m[INFO]\033[0m" << std::endl;
	std::cout << "	I cannot believe adding extra bacon costs more money.\n";
	std::cout << "	You didn’t put enough bacon in my burger!.\n";
	std::cout << "	If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "\n\033[38;5;202m[WARNING]\033[0m" << std::endl;
	std::cout << "	I think I deserve to have some extra bacon for free.\n";
	std::cout << "	I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "\n\033[31m[ERROR]\033[0m" << std::endl;
	std::cout << "	This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	typedef void (Harl::*complainsPtr)(); // same as: void (Harl::*array_complains[4])();

	complainsPtr array_complains[4] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	
	std::string array_levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (array_levels[i] == level)
		{
			(this->*array_complains[i])();
			return ;
		}
	}
	std::cout << "\n 🤔 Couldn't find this level, Harl is without words?\n" << std::endl;
}
