/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/27 16:03:35 by edribeir      #+#    #+#                 */
/*   Updated: 2024/11/27 16:55:09 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <>

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
			//UPPERCASE EVERYTHING AND PRINT
			std::cout << argv[i];
			i++;
		}
	}
	std::cout << "\n";
}