#ifndef ARRAY_HPP
#define ARRAY_HPP
#include<stdlib.h>
#include<exception>
#include<iostream>

template< typename T>
class Array {

	private:
        T *_array;
	public:

		Array( void ) {_array = new T[1]; };
        Array (unsigned int n) { _array = new T[n]; };

		Array( Array const & src ) {
            _array = new T[src.size()];
            for (size_t i = 0; i < src.size() ; i++)
                this->_array[i] = src._array[i]; 
        };

		~Array( void ) { delete [] _array;};

        //operator overloads
		Array	&operator= ( Array const & rhs ){
            delete [] _array;
            for (size_t i = 0; i < rhs.size() ; i++)
                this->_array[i] = rhs._array[i]; 

            return (this);
        };
        
        T     &operator[] (int const index) {
            if (index > (this->size()) || index < 0)
                throw out_of_range_exception();
            return this->_array[index];    
        };

        //Basic size function
        unsigned int   size( void ) const {
            unsigned int i = 0;
            while (_array[i])
                i++;
            return i;
        };

        //Exception
        class out_of_range_exception : public std::exception
        {
            public:
                virtual const char *what( void )
                {
                    return ("Exception, out of range");
                }
        };
};
#endif