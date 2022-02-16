#include "ClapTrap.hpp"


int main(void)
{
    ClapTrap frank("frank");
    ClapTrap MadVillain("MadVillain");
    ClapTrap MadVillainJr("MadVillainJr");
    ClapTrap frankJr("FrankJr");

	std::cout << "\n\n";

    int i = -1;
    while (++i < 12)
    {
        MadVillain.attack("frank");
        frank.takeDamage(MadVillain.getAttackDamage());
        frank.attack("MadVillain");
        MadVillain.takeDamage(frank.getAttackDamage());
    }

	std::cout << "\n\n";

    i = -1;
    while (++i < 12)
    {
        MadVillainJr.beRepaired(1);
        frankJr.beRepaired(2);
    }
	std::cout << "\n\n";
    return 0;
}
