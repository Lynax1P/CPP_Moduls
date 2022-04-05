#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_damage = 20;
	std::cout << "SCAVTRAP : " << this->_name << " [DEF Constructor]\n";
}

ScavTrap::ScavTrap(const ScavTrap &anotherScavTrap)
{
	*this = anotherScavTrap;
	std::cout << "SCAVTRAP : " << this->_name << " [COPY Constructor]\n";
}

ScavTrap::~ScavTrap(){
	std::cout << "SCAVTRAP : " << this->_name << " [DEF Destructor]\n";
}

ScavTrap		&ScavTrap::operator=(const ScavTrap &anotherScavTrap){
	ClapTrap::operator=(anotherScavTrap);
	return *this;
}

void	ScavTrap::attack(std::string const &target){
	if (this->_hitPoints > 0){
		this->_hitPoints--;
		displayName();
		std::cout << " attacks " + target << " causing " << this->_damage << " points of damage!";
		displayEnergy();
	}
	else {
		displayName();
	 	std::cout << " no energy";
		displayEnergy();
	}
}

void ScavTrap::guardGate() {
    displayName();
    std::cout << " Guard gate mode on\n";
}
