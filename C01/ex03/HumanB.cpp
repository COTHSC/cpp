/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:53:56 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 17:51:54 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    return ;
}

HumanB::~HumanB()
{
    return ;
}

void    HumanB::attack(void) const    
{
	if (_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with his bear hands" << std::endl;

}

void    HumanB::setWeapon(Weapon &Weapon)
{
    this->_weapon = &Weapon;
}
