/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:14:44 by jescully          #+#    #+#             */
/*   Updated: 2022/02/15 13:54:04 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
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
    setRawBits((int)(value * (1 << _getFractionalBits())));
	return;
}

Fixed::Fixed(const float value)
{
	std::cout << "Fixed - Float constructor called\n";
    setRawBits((int)(roundf(value * (1 << _getFractionalBits()))));
	return;
}

int Fixed::_getFractionalBits( void ) const
{
    return _decimalBits; 
}

float Fixed::toFloat(void) const
{
    float ret;

    ret = ((float)getRawBits() / (float)(1 << _getFractionalBits()));
    return ret;

}

int Fixed::toInt(void) const
{
    int ret;

    ret = (int)getRawBits() / (1 << _getFractionalBits());
    return ret;

}

Fixed::~Fixed()
{
	std::cout << "Fixed - Destructor called\n";
	return;
}

int	Fixed::getRawBits( void ) const
{
	return _fixedPointValue;
}

Fixed&  Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Fixed - Assignation operator called\n";
    this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
    return o;
}
