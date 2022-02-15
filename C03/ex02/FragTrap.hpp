#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp" 

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name); 
        ~FragTrap();
        void highFivesGuys(void) const;
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};
#endif
