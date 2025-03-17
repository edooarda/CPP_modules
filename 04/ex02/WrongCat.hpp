/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 10:01:24 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/10 10:43:17 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat& operator=(const WrongCat& other);
		WrongCat(const WrongCat& other);
		~WrongCat();

		void makeSound(void) const;
};

#endif