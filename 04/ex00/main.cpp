/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 11:17:57 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/04 12:12:18 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
	const Animal* meta = new Animal();

	meta->makeSound();

	delete meta;
	return 0;
}