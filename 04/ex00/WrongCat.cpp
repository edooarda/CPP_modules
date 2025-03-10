/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 09:57:12 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/10 10:43:10 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << " WrongCat construct" << std::endl;
	this->type = "WrongCat";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << " WrongCat Cpy Operator" << std::endl;
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return(*this);
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << " WrongCat Cpy Construct" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << " WrongCat Destruct" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "I AM A CAT! Believe me!" << std::endl;
}