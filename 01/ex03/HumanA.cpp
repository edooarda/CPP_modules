#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	
	std::cout << "HumanA ready" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA says Bye" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
}