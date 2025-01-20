/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/20 16:45:06 by edribeir      #+#    #+#                 */
/*   Updated: 2025/01/20 16:45:07 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "\n• The memory address of the string variable = " << &str << std::endl;
	std::cout << "• The memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "• The memory address held by stringREF = " << &stringREF << std::endl;
	std::cout << "\n• The value of the string variable = " << str << std::endl;
	std::cout << "• The value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "• The value pointed to by stringREF = " << stringREF << std::endl;
}