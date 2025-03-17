/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/06 13:10:02 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/17 13:22:51 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "  Cat Construct" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "  Cat Cpy operator" << std::endl;
	if (this != &other)
	{
		AAnimal::operator=(other);
	}
	return (*this);
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	std::cout << "  Cat Cpy Construct" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "  Cat Destruct" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "  MIAU MIAU" << std::endl;
}

void	Cat::setIdeas(std::string idea, int index)
{
	this->brain->setIdeas(idea, index);
}

std::string Cat::getIdeas(int index) const
{
	return(this->brain->getIdeas(index));
}