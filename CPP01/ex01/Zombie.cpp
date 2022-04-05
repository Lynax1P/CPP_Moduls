#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::~Zombie() {
	std::cout << "Zombie was deleted.\n";
}

void Zombie::announce() {
	std::cout << _name <<" likes BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::createZombie(std::string name)
{
		_name = name;
		std::cout << "Zombie "<< _name <<" was born.\n";
}
