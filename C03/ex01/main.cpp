#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main(void)
{
    ScavTrap DOOM("MF");
    ScavTrap DOOM2("MF1");

	std::cout << "\n\n";
    DOOM.attack("MF1");
	std::cout << "\n\n";
    DOOM2.takeDamage(20);
	std::cout << "\n\n";
    DOOM2.beRepaired(20);
	std::cout << "\n\n";
	DOOM2.attack("MF");
	std::cout << "\n\n";
    DOOM.takeDamage(20);
	std::cout << "\n\n";
	DOOM.guardGate();
	std::cout << "\n\n";

    return 0;
}
