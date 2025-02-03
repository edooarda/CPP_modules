/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/03 18:36:56 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/03 19:00:56 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "ERROR. Use this format: ./harlFilter level" << std::endl;
		return (1);
	}
	std::cout << "argv[1]:" << argv[1] << std::endl;
}