/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/06 13:10:26 by edribeir      #+#    #+#                 */
/*   Updated: 2025/03/17 13:22:16 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
	private:
		Brain* brain;
	public:
		Cat();
		Cat& operator=(const Cat& other);
		Cat(const Cat& other);
		~Cat();
		
		void makeSound(void) const override;
		void setIdeas(std::string idea, int index);
		std::string getIdeas(int index) const;
};

#endif