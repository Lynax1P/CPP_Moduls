#include "ClapTrap.hpp"

int main(void) {
    ClapTrap    first("Antony");
    ClapTrap    second("Joe");

    std::cout << "\n";
    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    std::cout << "\n";

    first.attack(second.getName());
    second.takeDamage(first.getDamage());
    std::cout << "\n";
    return (0);
}
