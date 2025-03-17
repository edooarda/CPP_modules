/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/11 16:14:34 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/14 16:28:06 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "    Brain Construct" << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "    Brain Cpy Construct" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "    Brain Cpy Operator" << std::endl;
	if(this != &other)
	{
		for (int i = 0; i < 100; ++i) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "    Brain Destruct" << std::endl;
}

void Brain::setIdeas(std::string idea, int index)
{
	if (index < 0 || index > 101)
	{
		std::cout << "Provide one index between 0 and 100" << std::endl;
		return ;
	}
	this->ideas[index] = idea;
}

std::string Brain::getIdeas(int index) const
{
	if (index < 0 || index > 100)
	{
		std::cout << "Provide one index between 0 and 100" << std::endl;
		return ("");
	}
	return(this->ideas[index]);
}