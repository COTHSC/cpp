#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Diamond trap constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 30, 50), _name(name)
{
    std::cout << "Diamond trap name string called" << std::endl;
	std::cout << "\n\n";
	std::cout << "Hitpoints:     " << getHitPoints() << std::endl;
	std::cout << "AttackDamage:  " << getAttackDamage() << std::endl;
	std::cout << "Energy:        " << getEnergyPoints() << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Diamond trap destructor called" << std::endl;
    return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "[DiamondTrap] My (diamond) name is: " << this->_name << ", and my (clap) name is: " << this->ClapTrap::_name << std::endl;
}
