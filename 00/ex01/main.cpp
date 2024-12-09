/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edooarda <edooarda@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/12/09 09:53:03 by edooarda      #+#    #+#                 */
/*   Updated: 2024/12/09 16:23:23 by edooarda      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	std::string option;
	std::cout << "Welcome to your PhoneBook, please type one option: ADD or SEARCH or EXIT" << std::endl;
	std::cin >> option;
	std::cout << "this was typed: " << option << std::endl;
	// received 3 words: EXIT ADD and SEARCH
}