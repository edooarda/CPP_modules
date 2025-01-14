#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
	this->name = str;
	std::cout << this->name << ": Alive" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": Killed" << std::endl;

}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}