/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/18 09:39:47 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/20 14:10:16 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "---------------------------------------------------------\n" << std::endl;
	std::cout << "\t Welcome to your PhoneBook 📝\n" << std::endl;
	std::cout << " You can choose between the following options" << std::endl;
	std::cout << " ADD - save a new contact" << std::endl;
	std::cout << " SEARCH - display a specific contact" << std::endl;
	std::cout << " EXIT - close the phonebook and erase contacts! 🧹\n" << std::endl;
	std::cout << "---------------------------------------------------------\n" << std::endl;
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "-------------------------------------\n" << std::endl;
	std::cout << " Bye! Exiting from your PhoneBook ✅ \n" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
}

void	PhoneBook::add()
{
	std::string	phone;

	if (this->index > 7)
	{
		std::cout << "\nYou will replace one old contact. Be aware of it! 💀\n" << std::endl;
		this->index = this->index % 8;
	}
	std::cout << "\t Ready to Add a Contact, Please type: " << std::endl; 
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
	std::cout << "\nContact was ADD to your PhoneBook! 🥳 \n" << std::endl;
}

void	PhoneBook::printList()
{
	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "   Index  |  F. Name |  L. Name |  Nickname" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < 8 && (this->contactList[i].getIndex() != 0); i++)
	{
		truncValue(std::to_string(contactList[i].getIndex()));
		std::cout << "|";
		truncValue(contactList[i].getFirstName());
		std::cout << "|";
		truncValue(contactList[i].getLastName());
		std::cout << "|";
		truncValue(contactList[i].getNickname());
		std::cout << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
	}
}

void	PhoneBook::search()
{
	std::string	contactIndex;
	bool		contactFound = false;

	if (this->contactList[0].getIndex() == 0)
	{
		std::cout << "\n\t ⚠️  OPS! The PhoneBook is currently empty" << std::endl;
		std::cout << "\t   ADD some contact to begin your List!\n" << std::endl;
		return ;
	}
	printList();
	while (contactFound == false)
	{
		std::cout << "\n To display more about a contact provide its INDEX NUMBER or to exit the SEARCH type E: ";
		std::cin >> contactIndex;
		if (contactIndex[0] == 'E' && contactIndex.size() == 1)
		{
			std::cout << "\n🟢 Exiting contact search" << std::endl;
			std::cin.clear();
			std::cin.ignore();
			break;
		}
		else if (contactIndex.size() != 1 || !isnumber(contactIndex[0]) || contactIndex[0] == '9' || contactIndex[0] == '0')
		{
			std::cout << "\n ❌ Wrong Input! Provide a index from 1 to 8, please" << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}
		else
		{
			for (int i = 0; i < 8; i++)
			{
				if ((contactIndex[0] - 48) == this->contactList[i].getIndex())
				{
					this->contactList[i].printContact();
					std::cin.clear();
					std::cin.ignore();
					contactFound = true;
					break;
				}
			}
			if (!contactFound)
			{
				std::cout << "\n⛔ Nothing to display, please try again" << std::endl;
			}
		}
	}
}

