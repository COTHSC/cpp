#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int         _hitPoints;
        int         _energyPoints;
        int         _attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void    attack(const std::string& target);
       void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        int     getAttackDamage( void ) const;
        int     getEnergyPoints( void ) const;
        int     getHitPoints( void ) const;
};
