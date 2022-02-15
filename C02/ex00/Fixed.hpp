/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:10:39 by jescully          #+#    #+#             */
/*   Updated: 2022/02/15 13:51:52 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed 
{
	public:
		Fixed();
		Fixed(Fixed const & src);
		~Fixed();
		int		getRawBits( void ) const;
		void	setRawBits(int const raw);
		Fixed&  operator=(const Fixed& rhs);
	private:
		int	_fixedPointValue;
		static const int _decimalBits = 8;
};
