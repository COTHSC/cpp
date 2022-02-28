#include <iostream>
#include <stdexcept>
#include <algorithm>

class notFountException : public std::exception
{
    public:
        virtual const char *    what() const throw() { 
            return("Error, value not found");
            };
};

template<typename T>
typename T::const_iterator easyfind(T const & container, int const  &nbr)
{
    typename T::const_iterator it = container.begin();

    if ((it = std::find(it, container.end(), nbr)) == container.end())
        throw notFountException();
    return (it);
}