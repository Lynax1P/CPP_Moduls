#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30){
	std::cout << "FRAGTRAP : " << this->_name << " [DEF Constructor]\n";
}

FragTrap::FragTrap(const FragTrap &anotherFragTrap){
	*this = anotherFragTrap;
	std::cout << "FRAGTRAP : " << this->_name << " [COPY Constructor]\n";
}

FragTrap::~FragTrap(){
	std::cout <<"FRAGTRAP : " << _name + " " << "[ DEF Destructor ]\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &anotherFragTrap){
	ClapTrap::operator=(anotherFragTrap);
	return *this;
}

void		FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints > 0){
		this->_hitPoints--;
		displayName();
		std::cout << " attacks " + target << " causing " << this->_damage << " points of damage!\n";
		displayEnergy();
	}
	else {
		displayName();
	 	std::cout << " no energy\n";
		displayEnergy();
	}
}

void		FragTrap::highFivesGuys(void)
{
	displayName();
    std::cout << " has given a high five! ";
}