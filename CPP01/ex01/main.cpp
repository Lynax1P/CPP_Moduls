#include "Zombie.hpp"

#define ZOMBSIZE 10

int	main(void)
{
	Zombie *Horde;

	Horde = zombieHorde(ZOMBSIZE , "Cheburek");

	for (int i = 0; i < ZOMBSIZE; i++)
		Horde[i].announce();
	delete [] Horde;
	return (0);
}