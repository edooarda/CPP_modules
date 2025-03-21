/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 17:56:40 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/17 16:41:06 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private:
		Brain* brain;
	public:
		Dog();
		Dog& operator=(const Dog& other);
		Dog(const Dog& other);
		~Dog();

		void makeSound(void) const override;
		std::string getIdeas(int index) const;
		void setIdeas(std::string idea, int index);
};

#endif