/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 17:56:28 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/17 16:35:12 by edribeir      ########   odam.nl         */
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
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

// Dog::Dog(const Dog& other) : Animal(other)
// {
// 	std::cout << " Dog Cpy Construct (shallow)" << std::endl;
// }

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << " Dog Cpy Construct (deep)" << std::endl;
	this->type = other.type;
	this->brain = new Brain(*other.brain);
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

void Dog::setIdeas(std::string idea, int index)
{
	this->brain->setIdeas(idea, index);
}

std::string Dog::getIdeas(int index) const
{
	return (this->brain->getIdeas(index));
}
