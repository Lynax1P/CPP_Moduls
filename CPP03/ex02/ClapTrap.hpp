#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>


class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_damage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &anotherClapTrap);
	ClapTrap(std::string name, unsigned int hP, unsigned int P, unsigned int DD);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &anotherClapTrap);

	void				attack(std::string const &target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	std::string	const	&getName()		const;
	unsigned	int		getHitPoint()	const;
	unsigned	int		getDamage()		const;

	void				displayName()	const;
	void				displayHit()	const;
	void				displayEnergy()	const;
};



#endif