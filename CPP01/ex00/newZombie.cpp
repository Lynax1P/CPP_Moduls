#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *newChebuchek = new Zombie(name);
	return (newChebuchek);
}