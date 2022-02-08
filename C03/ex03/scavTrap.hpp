#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "clapTrap.hpp" 

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name); 
        ~ScavTrap();
        void guardGate() const;
    private:
};
#endif
