#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap (name, 100, 20, 50)
{
    std::cout << "Frag trap string constructor was called" << std::endl;
    return ;
}

FragTrap::FragTrap()
{
    std::cout << "Frag trap default constructor was called" << std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag trap destructor was called" << std::endl;
    return ;
}

void    FragTrap::highFivesGuys( void ) const
{
    std::cout << "[FragTrap] Lets high five?" << std::endl;
    return ;
}

void    FragTrap::attack(const std::string& target)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[FragTrap] " << _name ;
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

void    FragTrap::takeDamage(unsigned int amount)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[FragTrap] " << _name ;
        std::cout << " has been hit ";
        std::cout << " loosing  " << amount;
        std::cout << " hit points" << std::endl;
        if (_hitPoints >= (int)amount)
            _hitPoints -= amount;
        else
            _hitPoints = 0;
    }

}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints && _hitPoints)
    {
        std::cout << "[FragTrap] " << _name ;
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
