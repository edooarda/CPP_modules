#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

	public:
	ScavTrap();
	// cpy constructor
	// cpy operator 
	~ScavTrap();

	void guardGate();
};

#endif