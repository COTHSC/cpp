/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:10:39 by jescully          #+#    #+#             */
/*   Updated: 2022/02/15 13:53:00 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed 
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const & src);
		int toInt( void ) const;
		float toFloat( void ) const;
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		Fixed &  operator=(const Fixed & rhs);
		std::ostream & operator<<( std::ostream & o);
	private:
		int		_getFractionalBits( void ) const;
		int	_fixedPointValue;
		static const int _decimalBits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
#endif
