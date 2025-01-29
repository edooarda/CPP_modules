/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 14:42:11 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/29 11:38:04 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main (int argc, char **argv)
{
	std::string	_filename = argv[1];
	// std::string	_str1 = argv[2];
	// std::string	_str2 = argv[3];

	if (argc != 4)
	{
		std::cerr << "Wrong Input, please provide: filename str1 str2" << std::endl;
	}
	else
		std::cout << "this is what is inside the string: " << _filename << std::endl;
}