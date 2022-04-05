#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie newZombakStack(name);
	newZombakStack.announce();
	std::cout << std::endl;
}