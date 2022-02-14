/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:41:32 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 12:36:28 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    std::cout << "A zombie is born? undeaded?" <<std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << _name << " is real dead this time" << std::endl;
    return ;
}

void Zombie::announce(void) const
{
    std::cout << _name << " Braaaaaaaaaaaaaaaaaiiiiinzzzzzzz" << std::endl;
}

void    Zombie::setName(std::string str)
{
    this->_name = str; 
}
