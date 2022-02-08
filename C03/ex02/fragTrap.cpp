#include "clapTrap.hpp"

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
    std::cout << "Lets high five?" << std::endl;
    return ;
}
