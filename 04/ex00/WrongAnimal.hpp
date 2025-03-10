/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/07 17:29:00 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/10 10:43:34 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string type;
		
	public:
		WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal &other);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal();

		void makeSound(void) const;
		std::string getType(void) const;
};

#endif