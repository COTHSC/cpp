#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap (name, 100, 20, 50)
{
    std::cout << "Scav trap string constructor was called" << std::endl;
    return ;
}

ScavTrap::ScavTrap()
{
    std::cout << "Scav trap default constructor was called" << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scav trap destructor was called" << std::endl;
    return ;
}

void    ScavTrap::attack(const std::string& target)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[ScavTrap] " << _name ;
        std::cout << " attacks " << target ;
        std::cout << " causing " << _attackDamage;
        std::cout << " points of damage" << std::endl;
        _energyPoints--;
    }
    else if (!_hitPoints)
        std::cout << _name << " is dead." << std::endl;
    else
        std::cout << _name << " is super tired" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[ScavTrap] " << _name ;
        std::cout << " has been hit ";
        std::cout << " loosing  " << amount;
        std::cout << " hit points" << std::endl;
        if (_hitPoints >= (int)amount)
            _hitPoints -= amount;
        else
            _hitPoints = 0;
    }

}

void    ScavTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[ScavTrap] " << _name ;
        std::cout << " with " << _hitPoints << " hit points";
        std::cout << " has gone to the emergency room ";
        std::cout << " to regaing " << amount << " hit points" << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    }
    else if (!_hitPoints)
        std::cout << _name << " is dead." << std::endl;
    else
        std::cout << _name << " is super tired" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "[ScavTrap] You shall not parse." << std::endl;
}
