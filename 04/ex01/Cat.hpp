/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/06 13:10:26 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/14 17:37:59 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain* brain;
	public:
		Cat();
		Cat& operator=(const Cat& other);
		Cat(const Cat& other);
		~Cat();
		
		void makeSound(void) const;
		void setIdeas(std::string idea, int index);
		std::string getIdeas(int index) const;
};

#endif