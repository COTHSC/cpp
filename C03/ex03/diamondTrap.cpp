#include "diamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    std::cout << "Diamond trap constructor called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    std::cout << "Diamond trap name string called" << std::endl;
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

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My (diamond) name is: " << this->_name << " and my (clap) name is: " << this->ClapTrap::_name << std::endl;
}
