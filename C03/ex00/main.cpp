#include "clapTrap.hpp"


int main(void)
{
    ClapTrap frank("frank");
    ClapTrap MadVillain("MadVillain");
    ClapTrap MadVillainJr("MadVillain");
    ClapTrap frankJr("Frank");

    int i = -1;
    while (++i < 20)
    {
        MadVillain.attack("frank");
        frank.takeDamage(MadVillain.getAttackDamage());
        frank.attack("MadVillain");
        MadVillain.takeDamage(frank.getAttackDamage());
        std::cout << i << std::endl;
    }

    /* i = -1; */
    /* while (++i < 20) */
    /* { */
    /*     MadVillainJr.attack("FrankJr"); */
    /*     frankJr.takeDamage(2); */
    /*     frankJr.attack("MadVillainJr"); */
    /*     MadVillainJr.takeDamage(1); */
    /* } */

    i = -1;
    while (++i < 20)
    {
        MadVillainJr.beRepaired(1);
        frankJr.beRepaired(2);
    }
    return 0;
}
