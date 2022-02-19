#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "A brain has been defaultly constructed" << std::endl;
    return ;
}

Brain::Brain( Brain const &src)
{
    *this = src;
    std::cout << "A brain has been copied" << std::endl;
    return ;
}

Brain   &Brain::operator=(Brain const & copy)                                   
{                                                                               
    std::cout << "Brain's operator= ";                                          
    if (this != &copy)                                                          
    {                                                                           
        for (int i = 0; i < 100; i++)                                           
            this->_ideas[i] = copy._ideas[i];                                   
    }                                                                           
    std::cout << " called" << std::endl;                                        
    return *this;                                                               
}             

Brain::~Brain( void )
{
    std::cout << "A brain has been defaultly destroyed" << std::endl;
    return ;
}
