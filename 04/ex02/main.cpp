/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 11:17:57 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/17 16:50:02 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Dog* j = new Dog();
		const Cat* i = new Cat();

		j->makeSound();
		i->makeSound();
		delete j;
		delete i;
	}
	std::cout << "\n--------------------------------\n" << std::endl;
	{
		AAnimal* aDog = new Dog();
		AAnimal* aCat = new Cat();

		aDog->makeSound();
		aCat->makeSound();

		delete aDog;
		delete aCat;
	}
	// std::cout << "\n--------------------------------\n" << std::endl;
	// const AAnimal* abstraction = new AAnimal();
	// abstraction->makeSound();
	// std::cout << "\n--------------------------------\n" << std::endl;
	// AAnimal b;

	// b.makeSound();

	// {
	// 	Dog a;
	
	// 	a.makeSound();
	// }

	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }
	return 0;
}