#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain 
{
    private:
        std::string _ideas[100];
    public:
        Brain( void );
        Brain (Brain const & src);
        ~Brain ( void );
        Brain &operator=(Brain const & rhs);
        void add(unsigned int i, std::string str);
        void show(unsigned int const i) const;


};

#endif
