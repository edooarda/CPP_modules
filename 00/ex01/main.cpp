/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/09 09:53:03 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/20 12:48:30 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	contactList;
	std::string	option;

	while (1)
	{
		std::cout << "\n Please type one option: ADD or SEARCH or EXIT" << std::endl;
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
			break;
		}
		else
		{
			std::cout << "\n\t🚫 Wrong INPUT! 🚫" << std::endl;
		}
	}
}
