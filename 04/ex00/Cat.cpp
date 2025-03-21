/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/06 13:10:02 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/06 16:38:28 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "  Cat Construct" << std::endl;
	this->type = "Cat";
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "  Cat Cpy operator" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "  Cat Cpy Construct" << std::endl;
}

Cat::~Cat()
{
	std::cout << "  Cat Destruct" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "MIAU MIAU" << std::endl;
}