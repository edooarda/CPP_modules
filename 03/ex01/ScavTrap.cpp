#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Construct ScavTrap Default" << std::endl;
	this->name = "Default";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "Cpy Construct ScavTrap";
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap is being Desconstruct" << std::endl;
}