/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/11 16:14:34 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/11 16:25:47 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Construct" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain Cpy Construct" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
	if(this != &other)
	{
		
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destruct" << std::endl;
}