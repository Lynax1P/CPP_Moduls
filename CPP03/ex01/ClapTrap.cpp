#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Anonymus"), _hitPoints(10), _energyPoints(10), _damage(){ }

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _damage(0){
	std::cout <<"CLAPTRAP : " << _name + " " << "[ DEF Constructor ]\n";
}

ClapTrap::ClapTrap(const ClapTrap &anoterClapTrap){
	*this = anoterClapTrap;
	std::cout <<"CLAPTRAP : " << _name + " " << "[ COPY Constructor ]\n";
}

ClapTrap::~ClapTrap(){
	std::cout <<"CLAPTRAP : " << _name + " " << "[ DEF Destructor ]\n";
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &anotherClapTrap)
{
	std::cout << "[ Assignation operator called ]\n";
	if (this == &anotherClapTrap)
		return *this;
	this->_name = anotherClapTrap._name;
	this->_hitPoints = anotherClapTrap._hitPoints;
	this->_energyPoints = anotherClapTrap._energyPoints;
	this->_damage = anotherClapTrap._damage;
	return *this;
}

const std::string	&ClapTrap::getName() const {
	return this->_name;
}

unsigned int		ClapTrap::getDamage() const {
	return this->_damage;
}

unsigned int		ClapTrap::getHitPoint() const{
	return this->_hitPoints;
}

void				 ClapTrap::attack(std::string const &target){
	
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

void				ClapTrap::takeDamage(unsigned int amount)
{
	(this->_hitPoints - amount > 0) ? this->_hitPoints -= amount : this->_hitPoints = 0;

	displayName();
	std::cout << " was attacked and received " << amount << " damage!\n";

	displayHit();
	if (this->_hitPoints <= 0)
		std::cout << _name << " has DIED.";
}


void				ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;

	displayName();
	std::cout << " was healed with " << amount << " points of HP!\n";
	displayHit();
}

void				ClapTrap::displayName() const { 
	std::cout << this->_name << " : ";
}

void				ClapTrap::displayHit() const {
	std::cout << "\t\t[ " << this->_hitPoints << " HP left ]\n";

}

void				ClapTrap::displayEnergy() const {
	std::cout << "\t\t[ " << this->_energyPoints << "  energy points left ]\n";
}