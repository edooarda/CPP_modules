/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/25 18:03:59 by edribeir      #+#    #+#                 */
/*   Updated: 2025/02/25 18:21:47 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public:
	ScavTrap();
	ScavTrap(const ScavTrap &other);
	ScavTrap&	operator=(const ScavTrap& other);
	~ScavTrap();

	void	guardGate();
};

#endif