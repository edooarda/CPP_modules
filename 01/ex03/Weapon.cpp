#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
	this->type = type;
	std::cout << "Filling ammo from "<< type << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Running out of ammo, destruing Weapon" << std::endl;
}

const std::string&	Weapon::getType() const
{
	return (this->type);
}

void	Weapon::setType(std::string w_type)
{
	this->type = w_type;
}