#ifndef	SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap {
public:
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &anotherScavTrap);
    ~ScavTrap();

    ScavTrap    &operator=(const ScavTrap &anotherScavTrap);

    void attack(std::string const &target);
    void guardGate();
};


#endif