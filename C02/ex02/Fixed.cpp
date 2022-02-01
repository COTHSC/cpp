/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:14:44 by jescully          #+#    #+#             */
/*   Updated: 2022/01/31 10:48:37 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedPoint.hpp"
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Fixed - Default constructor called\n";
	return;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Fixed - Copy constructor called\n";
	*this = src;
	return;
}

Fixed::Fixed(const int value)
{
	std::cout << "Fixed - Int constructor called\n";
    setBits((int)(value * (1 << _getFractionalBits())));
	return;
}

Fixed::Fixed(const float value)
{
	std::cout << "Fixed - Float constructor called\n";
    setBits((int)(roundf(value * (1 << _getFractionalBits()))));
	return;
}

int Fixed::_getFractionalBits( void ) const
{
    return _decimalBits; 
}

float Fixed::toFloat(void) const
{
    float ret;

    ret = ((float)getBits() / (float)(1 << _getFractionalBits()));
    return ret;

}

int Fixed::toInt(void) const
{
    int ret;

    ret = (int)getBits() / (1 << _getFractionalBits());
    return ret;

}
Fixed::~Fixed()
{
	std::cout << "Fixed - Destructor called\n";
	return;
}

int	Fixed::getBits( void ) const
{
	/* std::cout << "Fixed - getRawBits member function called\n"; */
	return _fixedPointValue;
}

Fixed&  Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Fixed - Assignation operator called\n";
    this->_fixedPointValue = rhs.getBits();
	return *this;
}

bool    Fixed::isInt( void ) const
{
    int i = -1;
    
    while( ++i < _getFractionalBits())
    {
        if (((getBits() & (1 << i)) >> i) == 1)
            return false;
    }
    return true;
}

void	Fixed::setBits(int const raw)
{
	_fixedPointValue = raw;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
    if (!rhs.isInt())
        o << rhs.toFloat();
    else
        o << rhs.toInt();
    return o;
}
