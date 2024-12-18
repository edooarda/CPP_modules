/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/09 09:53:03 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/18 12:33:27 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook contactList;
	std::string option;
	std::cout << "---------------------------------------------------------\n" << std::endl;
	std::cout << "\t Welcome to your PhoneBook 📝\n" << std::endl;
	std::cout << " Please type one option:" << std::endl;
	std::cout << " ADD - save a new contact" << std::endl;
	std::cout << " SEARCH - display a specific contact" << std::endl;
	std::cout << " EXIT - close the phonebook and erase contacts! 🧹\n" << std::endl;

	std::cout << "---------------------------------------------------------\n" << std::endl;
	while (1)
	{
		std::cout << " ↪ ";
		getline(std::cin, option);
		if (option == "ADD")
		{
			contactList.add();
		}
		else if (option == "SEARCH")
		{
			contactList.search();
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
