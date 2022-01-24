/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:41:32 by jescully          #+#    #+#             */
/*   Updated: 2022/01/21 20:10:59 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
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

Zombie  *newZombie(std::string name)
{
    Zombie *retZombie = new Zombie(name);
    retZombie->announce();
    return retZombie;
}

void randomChump(std::string name)
{
    Zombie retZombie(name);
    retZombie.announce();
}
