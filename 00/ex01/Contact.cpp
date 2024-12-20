/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/17 12:26:07 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/20 11:45:35 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// Default Contact Class without parameters
Contact::Contact()
{
	this->index = 0;
}

// This a destructor for Contact Class
Contact::~Contact()
{
}

// Getter Functions for Contact Class
std::string	Contact::getFirstName() const
{
	return (this->firstName);
}

std::string	Contact::getLastName() const
{
	return (this->lastName);
}

std::string	Contact::getNickname() const
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}

int	Contact::getIndex() const
{
	return (this->index);
}

// Setter Functions Contact Class
void	Contact::setFirstName(std::string str)
{
	this->firstName = str;
}

void	Contact::setLastName(std::string str)
{
	this->lastName = str;
}

void	Contact::setNickname(std::string str)
{
	this->nickname = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
}

void	Contact::setIndex(int index)
{
	this->index = index;
}

// Function to Print Selected Contact
void	Contact::printContact()
{
	std::cout << "\n✨ Here is your Contact ✨ \n" << std::endl;
	std::cout << "➜ Index: " << getIndex() << std::endl;
	std::cout << "➜ First Name: " << getFirstName() << std::endl;
	std::cout << "➜ Last Name: " << getLastName() << std::endl;
	std::cout << "➜ Nickname: " << getNickname() << std::endl;
	std::cout << "➜ Phone Number: " << getPhoneNumber() << std::endl;
	std::cout << "➜ Darkest Secret: " << getDarkestSecret() << std::endl;
}
