/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/09 09:52:46 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/20 13:05:05 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contactList[8];
		int		index;
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
		void	printList();
};

// Auxiliar Functions
bool	numberValidator(std::string input);
std::string	emptyChecker(std::string input);
void	truncValue(std::string str);

#endif