#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->name = str;
	std::cout << this->name << " is Alive" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " was Killed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}