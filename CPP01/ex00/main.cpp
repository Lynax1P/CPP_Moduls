#include "Zombie.hpp"

int	main(void)
{
	Zombie newZombak("Cheburek");
	newZombak.announce();
	std::cout << std::endl;

	Zombie *ZumerZ = newZombie("Cheburechek");
	ZumerZ->announce();
	std::cout << std::endl;

	randomChump("Stachok");
	delete ZumerZ;
	return (0);
}