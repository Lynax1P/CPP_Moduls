#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon &weapon): _name(name), _weapon(&weapon) {
	std::cout << "HumanB " << _name << " was created.\n";
}

HumanB::HumanB(std::string name): _name(name) {
	std::cout << "HumanB " << _name << " was created.\n";
}

HumanB::~HumanB(){
	std::cout << "HumanB " << _name << " was deleted.\n";
}

void HumanB::attack(){
	std::cout << "HumanB " << _name;
	std::cout << " attacks" << " with his " << _weapon->getType() << " weapon.\n";
}

void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}