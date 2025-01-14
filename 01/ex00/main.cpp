#include "Zombie.hpp"

int	main(void)
{
	Zombie*	heap_zombie;

	randomChump("STACK");
	heap_zombie = newZombie("HEAP");
	heap_zombie->announce();
	delete heap_zombie;
}