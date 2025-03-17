/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 11:17:57 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/17 16:39:13 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << "\n--------------------------------\n" << std::endl;

	Animal* animals[10];
	for (int i = 0; i < 10; ++i)
	{
		if (i < 5)
		{
			animals[i] = new Dog();
		}
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < 10; ++i)
	{
		delete animals[i];
	}

	{
		std::cout << "\n----------------------------------\n\n	Setting Dog IDEAS\n" << std::endl;
		
		Dog doguito;

		for (int i = 0; i < 10; ++i)
		{
			if (i % 2 == 0)
			{
				doguito.setIdeas("FOOD!", i);
			}
			else
			{
				doguito.setIdeas("PLAY!", i);
			}
		}
			for (int i = 0; i < 12; ++i)
		{
			if (doguito.getIdeas(i) == "")
				std::cout << "Doguito is without ideas!" << std::endl;
			else
				std::cout << "Doguito ideas: " << doguito.getIdeas(i) << std::endl;
		}
	}

	{
		std::cout << "------------------------------------\n\n	Setting Cat IDEAS\n" << std::endl;

		Cat catito;
		
		for (int i = 0; i < 100; ++i)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				catito.setIdeas("Purr Purr", i );
			}
			else if(i % 3 == 0)
			{
				catito.setIdeas("Whiskas", i);
			}
			else if (i % 5 == 0)
			{
				catito.setIdeas("Break stuff", i);
			}
			else
			{
				catito.setIdeas("Nap", i);
			}
		}

		for (int i = 0; i < 100; ++i)
		{
			std::cout << "index: " << i << " Catito ideas: " << catito.getIdeas(i) << std::endl;
		}
	}
	
	{
		std::cout << "\n------------------------------------\n" << std::endl;
		Dog dog1;
		dog1.setIdeas("Chase the ball", 0);

		Dog dog2 = dog1;

		// Dog dog2;
		// dog2 = dog1;

		dog2.setIdeas("Eat food", 0);

		std::cout << dog1.getIdeas(0) << std::endl;
		std::cout << dog2.getIdeas(0) << std::endl;
	}

	// Dog basic;
	// {
	// 	Dog tmp = basic;
	// }

	return 0;
}