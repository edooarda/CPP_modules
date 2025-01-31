/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace_strings.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/30 14:43:41 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/31 15:12:37 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fake_sed.hpp"

bool	replace_strings(std::string &filename, std::string &remove, std::string &replace)
{
	std::string		line;
	size_t			position;
	size_t			begin;
	
	std::ifstream	infile(filename);
	if (infile.is_open())
	{
		std::ofstream	outfile(filename + ".replace");
		if (!outfile.is_open())
		{
			std::cout << "Problem creating" << filename << ".replace" << std::endl;
			infile.close();
			return (false);
		}
		while(std::getline(infile, line))
		{
			begin = 0;
			while((position = line.find(remove, begin)) != std::string::npos)
			{
				line.erase(position, remove.length());
				line.insert(position, replace);
				begin = position + replace.length();
			}
			outfile << line << "\n";
		}
		infile.close();
		outfile.close();
		return (true);
	}
	else
	{
		std::cerr << "Not possible to open your file. Are you sure it exists?" << std::endl;
		return (false);
	}
}
