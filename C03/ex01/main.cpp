#include "clapTrap.hpp"


int main(void)
{
    /* ClapTrap frank("frank"); */
    /* ClapTrap MadVillain("MadVillain"); */
    /* ClapTrap MadVillainJr("MadVillain"); */
    /* ClapTrap frankJr("Frank"); */
    ScavTrap DOOM("MF");

    DOOM.attack("frank");
    DOOM.takeDamage(3);
    DOOM.beRepaired(3);

    /* int i = -1; */
    /* while (++i < 20) */
    /* { */
    /*     MadVillain.attack("frank"); */
    /*     frank.takeDamage(MadVillain.getAttackDamage()); */
    /*     frank.attack("MadVillain"); */
    /*     MadVillain.takeDamage(frank.getAttackDamage()); */
    /*     std::cout << i << std::endl; */
    /* } */

    /* /1* i = -1; *1/ */
    /* /1* while (++i < 20) *1/ */
    /* /1* { *1/ */
    /* /1*     MadVillainJr.attack("FrankJr"); *1/ */
    /* /1*     frankJr.takeDamage(2); *1/ */
    /* /1*     frankJr.attack("MadVillainJr"); *1/ */
    /* /1*     MadVillainJr.takeDamage(1); *1/ */
    /* /1* } *1/ */

    /* i = -1; */
    /* while (++i < 20) */
    /* { */
    /*     MadVillainJr.beRepaired(1); */
    /*     frankJr.beRepaired(2); */
    /* } */
    return 0;
}
