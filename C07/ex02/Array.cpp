#include "Array.hpp"
#include <iostream>

Array::Array( void ){

	std::cout << "Array - Default constructor called\n";
	return ;
};

Array::Array( Array const & src ){

	std::cout << "Array - Copy constructor called\n";
	*this = src;
	return ;
};

Array::~Array( void ){

	std::cout << "Array - Destructor called\n";
	return;
};

Array	&Array::operator= ( Array const & rhs ){

	this-> = ;
	return *this;
};

