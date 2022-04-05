#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

class Zombie
{
	std::string _name;
public:
	Zombie();
	~Zombie();
	void	announce(void);
	void	createZombie(std::string name);
};

Zombie*		zombieHorde( int N, std::string name );

#endif