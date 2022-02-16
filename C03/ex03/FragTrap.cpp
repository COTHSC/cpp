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
