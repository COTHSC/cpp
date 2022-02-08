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
        ClapTrap(std::string name, unsigned int hit, unsigned int attack, unsigned int energy);
        ~ClapTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        int     getAttackDamage( void ) const;
        int     getEnergyPoints( void ) const;
        int     getHitPoints( void ) const;
};

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name); 
        ~ScavTrap();
        void guardGate() const;
};

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name); 
        ~FragTrap();
        void highFivesGuys(void) const;
};
