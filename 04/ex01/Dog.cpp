/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 17:56:28 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/12 16:19:02 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << " Dog Construct" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog&	Dog::operator=(const Dog& other)
{
	std::cout << " Dog Cpy Operator" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return (*this);
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << " Dog Cpy Construct" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << " Dog Destruct" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << " WOOF WOFF" << std::endl;
}