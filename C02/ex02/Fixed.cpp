/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:14:44 by jescully          #+#    #+#             */
/*   Updated: 2022/02/01 17:03:00 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedPoint.hpp"
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0)
{
	/* std::cout << "Fixed - Default constructor called\n"; */
	return;
}

Fixed::Fixed(const Fixed & src)
{
	/* std::cout << "Fixed - Copy constructor called\n"; */
	*this = src;
	return;
}

Fixed::Fixed(const int value)
{
    setBits(value << _getFractionalBits());
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
	return;
}

int	Fixed::getBits( void ) const
{
	return _fixedPointValue;
}

Fixed&  Fixed::operator=(const Fixed& rhs)
{
    this->_fixedPointValue = rhs.getBits();
	return *this;
}

bool  Fixed::operator<(const Fixed & rhs) const
{
	if (this->getBits() < rhs.getBits())
		return true;
	return false;
}

bool  Fixed::operator<=(const Fixed & rhs) const
{
	if (this->getBits() <= rhs.getBits())
		return true;
	return false;
}

bool  Fixed::operator>(const Fixed & rhs) const
{
	if (this->getBits() < rhs.getBits())
		return false;
	return true;
}

bool  Fixed::operator>=(const Fixed & rhs) const
{
	if (this->getBits() <= rhs.getBits())
		return false;
	return true;
}

bool  Fixed::operator==(const Fixed & rhs) const
{
	if (this->getBits() == rhs.getBits())
		return true;
	return false;
}

bool  Fixed::operator!=(const Fixed & rhs) const
{
	if (this->getBits() != rhs.getBits())
		return true;
	return false;
}

Fixed Fixed::operator--(void)
{
	Fixed tmp;
	tmp.setBits(this->getBits() - (1 << this->_getFractionalBits()));
	return tmp;
}

Fixed Fixed::operator--(int)
{
	this->setBits(this->getBits() - (1 << this->_getFractionalBits()));
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

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed ret;

	ret.setBits(this->getBits() + rhs.getBits());
	return ret;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed ret;

	ret.setBits(this->getBits() - rhs.getBits());
	return ret;
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	long long int tmp = (long long int)this->getBits() * (long long int)rhs.getBits();
	Fixed ret;
	tmp = tmp >> _getFractionalBits();
	ret.setBits((int)tmp);
	return ret;
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	long long int tmp;
	Fixed ret;
	
	tmp = (this->getBits() << _getFractionalBits()) / rhs.getBits();
	ret.setBits((tmp));
	return ret;
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs )
{
    if (!rhs.isInt())
        o << rhs.toFloat();
    else
        o << rhs.toInt();
    return o;
}
