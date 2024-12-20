/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Utils.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/20 12:37:42 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/20 12:46:24 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
		str.resize(9);
		str[8] = '.';
		std::cout << std::setw(10) << str;
	}
	else
	{
		std::cout << std::setw(10) << str;
	}
}