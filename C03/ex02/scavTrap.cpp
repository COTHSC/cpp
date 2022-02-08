#include "clapTrap.hpp"

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

void ScavTrap::guardGate( void ) const
{
    std::cout << "Scav is now guading gate." << std::endl;
    return ;
}
