/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/27 16:03:35 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/23 11:14:41 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		while(i < argc)
		{
			for (int j = 0; argv[i][j]; j++)
			{
				std::cout << (char) std::toupper(argv[i][j]);
			}
			i++;
		}
	}
	std::cout << std::endl;
}
