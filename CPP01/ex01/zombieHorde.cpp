#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	Zombie*	Horde;

	Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		Horde[i].createZombie(name + std::to_string(i + 1));
	return Horde;
}