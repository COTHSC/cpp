#include "Dog.hpp"

Dog::Dog ( void ): _brain(new Brain)
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
    std::cout << "meow?" << std::endl;
}

void Dog::showIdeas( void ) const
{
    _brain->show(_nbIdeas);
}

void Dog::addIdea(std::string str)
{
    _brain->add(_nbIdeas, str);
    _nbIdeas++;
    if (_nbIdeas >= 100)
        _nbIdeas = 99;
}

Dog::~Dog ( void )
{
    std::cout << "A dog has been destroyed" << std::endl;
    delete _brain;
    return ;
}
