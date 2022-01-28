/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FixedPoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:10:39 by jescully          #+#    #+#             */
/*   Updated: 2022/01/28 16:42:41 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed 
{
	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		int		getBits( void ) const;
		void	setBits(int const raw);
		Fixed&  operator=(const Fixed& rhs);
	private:
		int	_fixedPointValue;
		static const int _decimalBits = 8;
};
