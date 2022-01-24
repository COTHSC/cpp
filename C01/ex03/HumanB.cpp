/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:53:56 by jescully          #+#    #+#             */
/*   Updated: 2022/01/23 18:10:12 by jescully         ###   ########.fr       */
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
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &Weapon)
{
    this->_weapon = &Weapon;
}
