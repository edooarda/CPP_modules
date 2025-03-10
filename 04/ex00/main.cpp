/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 11:17:57 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/10 10:58:23 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << "This is the type: " << j->getType() << " " << std::endl;
		std::cout << "This is the type" << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << "\n--------------------------\n" << std::endl;

		const WrongAnimal* abomination = new WrongAnimal();
		const WrongAnimal* quimera = new WrongCat();
		const WrongCat* notcat = new WrongCat();
		std::cout << "This is the WrongAnimal type: " << abomination->getType() << std::endl;
		std::cout << "This is the type: " << quimera->getType() << std::endl;
		std::cout << "This is Wrong Animal sound:  ";
		quimera->makeSound();
		std::cout << "This is Wrong Cat sound:  ";
		abomination->makeSound();
		std::cout << "This is the type: " << notcat->getType() << std::endl;
		std::cout << "This is WrongCat sound:  ";
		notcat->makeSound();

		delete abomination;
		delete quimera;
	}
	return 0;
}