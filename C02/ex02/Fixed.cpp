/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:14:44 by jescully          #+#    #+#             */
/*   Updated: 2022/02/15 13:56:56 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
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
    setRawBits(value << _getFractionalBits());
	return;
}

Fixed::Fixed(const float value)
{
	/* std::cout << "Fixed - Float constructor called\n"; */
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
	/* std::cout << "Fixed destructor called " << std::endl; */
	return;
}

int	Fixed::getRawBits( void ) const
{
	return _fixedPointValue;
}

Fixed&  Fixed::operator=(const Fixed& rhs)
{
    this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

bool  Fixed::operator<(const Fixed & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	return false;
}

bool  Fixed::operator<=(const Fixed & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return true;
	return false;
}

bool  Fixed::operator>(const Fixed & rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return false;
	return true;
}

bool  Fixed::operator>=(const Fixed & rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return false;
	return true;
}

bool  Fixed::operator==(const Fixed & rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	return false;
}

bool  Fixed::operator!=(const Fixed & rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator--(void)
{
	int tmp = this->getRawBits();
	this->setRawBits(--tmp);
	return *this;
}

Fixed Fixed::operator++(void)
{
	int tmp = this->getRawBits();
	this->setRawBits(++tmp);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	int temp = (this->getRawBits());
	this->setRawBits(--temp);
	return tmp;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	int temp = (this->getRawBits());
	this->setRawBits(++temp);
	return tmp;
}

bool    Fixed::isInt( void ) const
{
	int i = -1;

	while( ++i < _getFractionalBits())
	{
		if (((getRawBits() & (1 << i)) >> i) == 1)
			return false;
	}
	return true;
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() + rhs.getRawBits());
	return ret;
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	Fixed ret;

	ret.setRawBits(this->getRawBits() - rhs.getRawBits());
	return ret;
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	long long int tmp = (long long int)this->getRawBits() * (long long int)rhs.getRawBits();
	Fixed ret;
	tmp = tmp >> _getFractionalBits();
	ret.setRawBits((int)tmp);
	return ret;
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	long long int tmp;
	Fixed ret;
	
	tmp = (this->getRawBits() << _getFractionalBits()) / rhs.getRawBits();
	ret.setRawBits((tmp));
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


Fixed	&Fixed::min(Fixed & fp1, Fixed &fp2)
{
	if (fp1 < fp2)
		return fp1;
	return fp2;
}

const Fixed	&Fixed::min(const Fixed & fp1, const Fixed &fp2)
{
	if (fp1 < fp2)
		return fp1;
	return fp2;
}

Fixed	&Fixed::max(Fixed & fp1, Fixed &fp2)
{
	if (fp1 < fp2)
		return fp2;
	return fp1;
}

const Fixed	&Fixed::max(const Fixed & fp1, const Fixed &fp2)
{
	if (fp1 < fp2)
		return fp2;
	return fp1;
}
