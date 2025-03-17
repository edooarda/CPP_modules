/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/17 11:44:34 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/17 11:56:25 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal{

	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal& operator=(const AAnimal &other);
		virtual ~AAnimal();

		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif