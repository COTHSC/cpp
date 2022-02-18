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

void    Brain::add(unsigned int i, std::string str)
{
    if (i >= 100)
        i = 99;
    _ideas[i] = str;
    std::cout << "Idea is memorized !" << std::endl;
}

void Brain::show(unsigned int const i) const
{
    for (int j = 0; j < i; j++)
        std::cout << "Idea number: " << j << " " << _ideas[j] << std::endl;
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
