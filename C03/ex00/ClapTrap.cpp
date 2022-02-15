#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10) , _attackDamage(0)
{
    std::cout << "Clap trap default constructor was called" << std::endl;
    return ;
}

    ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Clap trap name constructor was called" << std::endl;
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Clap trap destructor was called" << std::endl;
    return ;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[ClapTrap] " << _name ;
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
void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[ClapTrap] " << _name ;
        std::cout << " has been hit ";
        std::cout << " loosing  " << amount;
        std::cout << " hit points" << std::endl;
        if (_hitPoints >= (int)amount)
            _hitPoints -= amount;
        else
            _hitPoints = 0;
    }

}
void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[ClapTrap] " << _name ;
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

int ClapTrap::getAttackDamage( void ) const
{
    return this->_attackDamage;
}

int ClapTrap::getEnergyPoints( void ) const
{
    return this->_energyPoints;
}

int ClapTrap::getHitPoints( void ) const
{
    return this->_hitPoints;
}
