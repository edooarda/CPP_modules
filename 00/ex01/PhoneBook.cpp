/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/18 09:39:47 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/18 15:51:58 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "Entrei no PhoneBook" << std::endl;
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Deletando tudo!"<< std::endl;
}

std::string	emptyChecker(std::string input)
{
	std::string value;

	do
	{
		std::cout << input << ": ", std::getline(std::cin, value);
		if (value.empty())
			std::cout << input << " cannot be empty. Please try again." << std::endl;
	} while (value.empty());
	return (value);
}

bool	numberValidator(std::string input)
{
	int i = 0;

	while (input[i])
	{
		if (!isnumber(input[i]))
		{
			std::cout << "\n 🚫 Invalid Phone Number. Please try again ONLY numbers.\n" << std::endl;
			return (false);
		}
		i++;
	}
	if (i < 6 || i > 10)
	{
		std::cout << "\n 🚫 Invalid Phone Number. Please try again.\n \t Min 6 digits and Max 10 digits.\n" << std::endl;
		return (false);
	}
	return (true);
}

void	truncValue(std::string str)
{
	int	len = str.size();

	if (len > 10)
	{
		str.resize(10);
		str[9] = '.';
		std::cout << str;
	}
	else
	{
		for (int i = 10 - len; i > 0; i--)
		{
			std::cout << " ";
		}
		std::cout << str;
	}
}


void	PhoneBook::add()
{
	std::string	phone;

	if (this->index > 7)
	{
		std::cout << "You will replace one old contact. Be aware of it! 💀" << std::endl;
		this->index = this->index % 8;
	}
	this->contactList[this->index].setIndex(this->index + 1);
	this->contactList[this->index].setFirstName(emptyChecker("First Name"));
	this->contactList[this->index].setLastName(emptyChecker("Last Name"));
	this->contactList[this->index].setNickname(emptyChecker("Nickname"));
	phone = emptyChecker("Phone Number");
	while (!numberValidator(phone))
	{
		phone = emptyChecker("Phone Number");
	}
	this->contactList[this->index].setPhoneNumber(phone);
	this->contactList[this->index].setDarkestSecret(emptyChecker("Darkest Secret"));
	this->index++;
	// TODO adicionar mensagem Usuario contato adicionado
}

void PhoneBook::printList()
{
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << "   Index  | First Name | Last Name | Nickname |" << std::endl;
	std::cout << "-----------------------------------------------" << std::endl;
	for (int i = 0; i < 8 && i < (index - 1); i++)
	{
		truncValue(std::to_string(contactList[i].getIndex()));
		std::cout << "|";
		truncValue(contactList[i].getFirstName());
		std::cout << "|";
		// Resize(contactList[i].GetLastName());
		// std::cout << "|";
		// Resize(contactList[i].GetNickname());
		std::cout << "|";
		std::cout << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
	}
}

void	PhoneBook::search()
{
	std::string	input;
	// int			i;

	if (this->contactList[0].getIndex() == 0)
	{
		std::cout << "OPS! The PhoneBook is currently empty!" << std::endl;
		std::cout << "Add some contact to Start your List!\n" << std::endl;
		return ;
	}
	// printList();
	// std::cout << "Please, provide the Contact Index you desire to see:";
	// if (std::cin >> input && input.size() == 1 && input[0] >= '1' && input[0] <= '8')
	// {
	// 	i = input[0] - '0' - 1;
	// 	// if (this->contactList[i].IsEmpty())
	// 	// 	std::cout << "This entry is currently empty" << std::endl; 
	// 	// else
	// 	// {
	// 		this->contactList[i].printContact();
	// 		std::cin.clear();
	// 		std::cin.ignore();
	// 		// break;
	// 	// }
	// }
	// else 
	// {
	// 	std::cout << "Please provide a valid index between 0 and 9" << std::endl;
	// 	std::cin.clear();
	// 	std::cin.ignore(100, '\n');
	// }
}

