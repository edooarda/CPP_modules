/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/09 09:53:03 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/11 11:47:52 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string option;
	std::cout << "---------------------------------------------------------\n" << std::endl;
	std::cout << "\t Welcome to your PhoneBook 📝" << std::endl;
	std::cout << " Please type one option: ADD or SEARCH or EXIT\n" << std::endl;
	std::cout << "---------------------------------------------------------\n" << std::endl;
	while (1)
	{
		std::cout << " ↪ ";
		getline(std::cin, option);
		if (option == "ADD")
		{
			std::cout << "Adicionei" << std::endl;
		}
		else if (option == "SEARCH")
		{
			std::cout << "PROCUREI" << std::endl;
		}
		else if (option == "EXIT")
		{
			std::cout << "-------------------------------------\n" << std::endl;
			std::cout << " Bye! Exiting from your PhoneBook ✅ \n" << std::endl;
			std::cout << "-------------------------------------" << std::endl;
			break;
		}
		else
		{
			std::cout << "\nWrong INPUT! 🚫" << std::endl;
			std::cout << "Please, choose between the 3 options:" << std::endl;
			std::cout << "\tADD or SEARCH or EXIT\n" << std::endl;
		}
	}
}
