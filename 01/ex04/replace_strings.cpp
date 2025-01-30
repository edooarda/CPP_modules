/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace_strings.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/30 14:43:41 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/30 17:56:03 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fake_sed.hpp"

bool	is_outfile_create(std::string &filename, std::string &find, std::string &replace)
{
	std::string input;

	std::ofstream outfile(filename + ".replace");
	if (!outfile.is_open())
	{
		std::cout << "Problem creating .replace" << std::endl;
		return (false);
	}
	// while()
	return (true);
}

bool	replace_strings(std::string &filename, std::string &find, std::string &replace)
{
	std::ifstream infile(filename);
	if (infile.is_open())
	{
		std::cout << "Abri! EXISTE! " << find << " " << replace << std::endl;
		if (!is_outfile_create(filename, find, replace))
		{
			infile.close();
			return (false);
		}
		infile.close();
		return (true);
	}
	else
	{
		std::cerr << "Not possible to open your file. Are you sure it exists?" << std::endl;
		return (false);
	}
}