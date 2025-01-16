#include "Zombie.hpp"

int	main(void)
{
	Zombie *firstHorde = zombieHorde(5, "zombieHungry");
	delete [] firstHorde;

	Zombie *secondHorde = zombieHorde(10, "noBrainers");
	delete [] secondHorde;
}