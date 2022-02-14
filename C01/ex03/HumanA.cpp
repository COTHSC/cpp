/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:46:20 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 17:48:14 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
    return ;
}

HumanA::~HumanA()
{
    return ;
}

void    HumanA::attack(void) const    
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
