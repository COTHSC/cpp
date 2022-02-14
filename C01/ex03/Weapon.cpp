/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 22:35:16 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 17:45:54 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

std::string const &Weapon::getType(void) const
{
    return this->_type;
}
