#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal(std::string = "undefined");
        virtual ~WrongAnimal(void);
        WrongAnimal(WrongAnimal const & src);
        WrongAnimal &operator=(WrongAnimal const &rhs);
        std::string getType( void ) const;
        void makeSound( void ) const;
    protected:
        std::string _type;
        unsigned int _nbIdeas;
};

#endif