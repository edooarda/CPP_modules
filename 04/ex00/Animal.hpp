/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 11:19:06 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/04 11:51:17 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{

	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &other);
		Animal& operator=(const Animal &other);
		~Animal();

	void makeSound(void) const;
};

#endif