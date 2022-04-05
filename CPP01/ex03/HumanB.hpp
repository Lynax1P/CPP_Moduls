#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB{
	std::string		_name;
	Weapon			*_weapon;
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon &weapon);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif
