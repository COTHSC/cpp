#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>



class ClapTrap
{
	protected:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(std::string name, unsigned int hit, unsigned int attack, unsigned int energy);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        int     getAttackDamage( void ) const;
        int     getEnergyPoints( void ) const;
        int     getHitPoints( void ) const;
};
#endif
