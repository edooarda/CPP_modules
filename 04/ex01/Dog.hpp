/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 17:56:40 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/12 16:16:48 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain* brain;
	public:
	Dog();
	Dog& operator=(const Dog& other);
	Dog(const Dog& other);
	~Dog();

	void makeSound(void) const;
};

#endif