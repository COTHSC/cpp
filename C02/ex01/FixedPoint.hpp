/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:10:39 by jescully          #+#    #+#             */
/*   Updated: 2022/01/31 09:34:16 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		int		getBits( void ) const;
		void	setBits(int const raw);
        bool    isInt (void) const;
		Fixed &  operator=(const Fixed & rhs);
	private:
		int		_getFractionalBits( void ) const;
		int	_fixedPointValue;
		static const int _decimalBits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
