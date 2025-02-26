/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edooarda <edooarda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:03:59 by edribeir          #+#    #+#             */
/*   Updated: 2025/02/26 20:09:23 by edooarda         ###   ########.fr       */
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
	ScavTrap(std::string name);
	~ScavTrap();

	void	guardGate();
	void	attack(const std::string& target);
};

#endif