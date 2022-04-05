#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {
	std::cout << "Zombie "<< _name <<" was born.\n";
}

Zombie::~Zombie() {
	std::cout << "Zombie was deleted.\n";
}

void Zombie::announce() {
	std::cout << _name <<" likes BraiiiiiiinnnzzzZ...\n";
}
