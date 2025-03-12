/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 11:17:57 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/12 16:40:04 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	//create & fill an array of Animals
	Animal* animals[10];
	for (int i = 0; i <= 10; ++i)
	{
		if(i <= 5)
		{
			animals[i] = new Dog();
		}
		else
			animals[i] = new Cat();
	}


	for (int i = 0; i <= 10; ++i)
	{
		delete animals[i];
	}
	delete j;//should not create a leak
	delete i;

	return 0;
}