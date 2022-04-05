#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon){
	_name = name;
	_weapon = &weapon; 
	std::cout << "HumanA " << _name << " was created with ";
	std::cout << _weapon->getType() << " weapon.\n";
}

HumanA::~HumanA() {
	std::cout << "HumanA " << _name << " was deleted.\n";
}

void HumanA::attack(){
	std::cout << "HumanA " << _name;
	std::cout << " attacks" << " with his " << _weapon->getType() << " weapon.\n";
}
