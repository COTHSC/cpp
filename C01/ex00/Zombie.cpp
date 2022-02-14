/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:41:32 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 12:31:26 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << _name << ": is real dead this time" << std::endl;
    return ;
}

void Zombie::announce(void) const
{
    std::cout << _name << ": Braaaaaaaaaaaaaaaaaiiiiinzzzzzzz" << std::endl;
}
