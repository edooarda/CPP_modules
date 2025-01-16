#include "Zombie.hpp"

// construct
Zombie::Zombie()
{
}

// destruct

Zombie::~Zombie()
{
	std::cout << this->name << " was killed" << std::endl;
}

void	Zombie::setName(std::string denomination)
{
	this->name = denomination;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}