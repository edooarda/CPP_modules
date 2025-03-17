/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/17 11:44:10 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/17 11:51:31 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Anormal")
{
	std::cout << "AAnimal Construct" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal Cpy Operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AAnimal Cpy Construct" << std::endl;
	this->type = other.type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destruct" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return(this->type);
}
void AAnimal::makeSound(void) const
{
	std::cout << " S I L E N C E " << std::endl;
}