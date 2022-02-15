#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
    ScavTrap DOOM("MF");
    FragTrap mos("def");

	std::cout << "\n\n";

    DOOM.attack("def");
	std::cout << "\n\n";
    mos.takeDamage(20);
	std::cout << "\n\n";
    
    mos.attack("DOOM");
	std::cout << "\n\n";
    DOOM.takeDamage(20);
	std::cout << "\n\n";

    mos.beRepaired(20);
	std::cout << "\n\n";
    DOOM.beRepaired(20);
	std::cout << "\n\n";

    DOOM.guardGate();
	std::cout << "\n\n";
    mos.highFivesGuys();
	std::cout << "\n\n";

    return 0;
}
