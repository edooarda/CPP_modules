/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 11:23:30 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/04 18:39:59 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Vertebrates")
{
	std::cout << "Animal Construct" << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal Cpy Operator" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal Cpy Construct" << std::endl;
	this->type = other.type;
}

Animal::~Animal()
{
	std::cout << "Animal Destruct" << std::endl;
}

std::string Animal::getType(void) const
{
	return(this->type);
}
void Animal::makeSound(void) const
{
	std::cout << " S I L E N C E " << std::endl;
}