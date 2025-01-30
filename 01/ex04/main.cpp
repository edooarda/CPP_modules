/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 14:42:11 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/30 16:56:26 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fake_sed.hpp"

int main (int argc, char **argv)
{
	std::string	_filename;
	std::string	_str1;
	std::string	_str2;

	if (argc != 4)
	{
		std::cerr << "Wrong Input, please provide: filename str1 str2" << std::endl;
		return (1);
	}
	else
	{
		_filename = argv[1];
		_str1 = argv[2];
		_str2 = argv[3];
		if (_str1.empty() || _str2.empty())
		{
			std::cout << "Strings couldn't be empty, please try again" << std::endl;
			return (1);
		}
		if (!replace_strings(_filename, _str1, _str2))
			return (1);
	}
}
