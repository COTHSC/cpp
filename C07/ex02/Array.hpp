#ifndef ARRAY_HPP
#define ARRAY_HPP
#include<stdlib.h>
#include<exception>
#include<iostream>

template< typename T>
class Array {

	private:
        T *_array;
        size_t _size;
	public:

		Array( void ) : _size(1) {_array = new T[1]; };
        Array (unsigned int n) : _size(n) { _array = new T[n]; };

		Array( Array const & src ) {
            _array = new T[src.size()];
            _size = src.size();
            for (size_t i = 0; i < src.size() ; i++)
                this->_array[i] = src._array[i]; 
        };

		~Array( void ) { delete [] _array;};

        //operator overloads
		Array	&operator= ( Array const & rhs ){
            delete [] _array;
            _array = new T[rhs.size()];
            _size = rhs._size;
            for (size_t i = 0; i < rhs.size() ; i++)
                this->_array[i] = rhs._array[i]; 
            return (this);
        };
        
        T     &operator[] (int const index) {
            if (index > (this->size() - 1) || index < 0)
                throw out_of_range_exception();
            return this->_array[index];    
        };

        //Basic size function
        size_t   size( void ) const {
            return _size;
        };

        //Exception
        class out_of_range_exception : public std::exception
        {
            public:
                virtual const char *what( void ) const throw()
                {
                    return ("Exception, out of range");
                }
        };
};
#endif