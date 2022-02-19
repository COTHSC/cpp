#include "Cat.hpp"

Cat::Cat ( void ) : Animal("cat")
{
    std::cout << "A cat has been defaultly constructed" << std::endl;
    return ;
}

Cat::Cat (Cat const &src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "meow?" << std::endl;
}


Cat::~Cat ( void )
{
    std::cout << "A cat has been destroyed" << std::endl;
    return ;
}
