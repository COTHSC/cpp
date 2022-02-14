/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:10:39 by jescully          #+#    #+#             */
/*   Updated: 2022/02/02 11:18:36 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed 
{
	public:
        //constructors & destructor
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const & src);
		~Fixed();

        //conversions
		int toInt( void ) const;
		float toFloat( void ) const;

        //getters and setters
		int		getBits( void ) const;
		void	setBits(int const raw);

		//min and max functions
		static Fixed	&min(Fixed & fp1, Fixed &fp2);
		static const Fixed	&min(const Fixed & fp1, const Fixed &fp2);

		static Fixed	&max(Fixed & fp1, Fixed &fp2);
		static const Fixed	&max(const Fixed & fp1, const Fixed &fp2);

        bool    isInt (void) const;
        //Hello operator (comparisons)
        bool    operator<(Fixed const & rhs) const;
        bool    operator>(Fixed const & rhs) const;
        bool    operator<=(Fixed const & rhs) const;
        bool    operator>=(Fixed const & rhs) const;
        bool    operator==(Fixed const & rhs) const;
        bool    operator!=(Fixed const & rhs) const;


        //Hello operator (calculus)
        Fixed operator+( Fixed const & rhs) const;
        Fixed operator*(const Fixed & rhs) const;
        Fixed operator-(const Fixed & rhs) const;
        Fixed operator/(const Fixed & rhs) const;

        Fixed operator--(void);
        Fixed operator--(int);
        Fixed operator++(void);
        Fixed operator++(int);

        //Hello operator (assignation)
		Fixed &  operator=(const Fixed & rhs);
	private:
		int		_getFractionalBits( void ) const;
		int	_fixedPointValue;
		static const int _decimalBits = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
