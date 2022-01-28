/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:14:44 by jescully          #+#    #+#             */
/*   Updated: 2022/01/28 17:03:02 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FixedPoint.hpp"

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

Fixed::~Fixed()
{
	std::cout << "Fixed - Destructor called\n";
	return;
}

int	Fixed::getBits( void ) const
{
	std::cout << "Fixed - getRawBits member function called\n";
	return _fixedPointValue;
}

Fixed&  Fixed::operator=(const Fixed& rhs)
{
	std::cout << "Fixed - Assignation operator called\n";
	this->_fixedPointValue = rhs.getBits();
	return *this;
}

void	Fixed::setBits(int const raw)
{
	_fixedPointValue = raw;
}
