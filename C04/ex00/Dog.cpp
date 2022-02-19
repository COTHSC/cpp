#include "Dog.hpp"

Dog::Dog ( void ): Animal("dog")
{
    std::cout << "A dog has been defaultly constructed" << std::endl;
    return ;
}

Dog::Dog (Dog const &src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src; 
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void Dog::makeSound( void ) const
{
    std::cout << "wouf wouf." << std::endl;
}

Dog::~Dog ( void )
{
    std::cout << "A dog has been destroyed" << std::endl;
    return ;
}
