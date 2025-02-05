/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/03 18:36:51 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/05 12:59:47 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "\n😅 Oh, Hello again Harl, what can I do for you?\n" << std::endl;
}

Harl::~Harl()
{
	std::cout << "\nBye and have a nice day 🎊" << std::endl;
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

Harl::Level Harl::convert_str_to_enum(std::string &levelstr)
{
	if (levelstr == "DEBUG")
		return (Harl::DEBUG);
	else if (levelstr == "INFO")
		return (Harl::INFO);
	else if (levelstr == "WARNING")
		return (Harl::WARNING);
	else if (levelstr == "ERROR")
		return (Harl::ERROR);
	else
		return (Harl::OUT);
}

void	Harl::complains(std::string level)
{
	switch (convert_str_to_enum(level))
	{
		case DEBUG:
			this->debug();
			// Fallthrough
		case INFO:
			this->info();
			// Fallthrough
		case WARNING:
			this->warning();
			// Fallthrough
		case ERROR:
		{
			this->error();
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
