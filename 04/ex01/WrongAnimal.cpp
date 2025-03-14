/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/07 17:26:12 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/10 10:43:29 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Construct" << std::endl;
	this->type = "Something that breaths";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Cpy Operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << "WrongAnimal Cpy Construct" << std::endl;
	this->type = other.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "S C R E A M" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}