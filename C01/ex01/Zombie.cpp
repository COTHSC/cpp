/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:41:32 by jescully          #+#    #+#             */
/*   Updated: 2022/01/22 13:22:20 by jescully         ###   ########.fr       */
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


/* Zombie  *newZombie(std::string name) */
/* { */
/*     Zombie *retZombie = new Zombie(name); */
/*     retZombie->announce(); */
/*     return retZombie; */
/* } */

void    Zombie::setName(std::string str)
{
    this->_name = str; 
}
Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *zombieHorde = new Zombie[N];
    int i = 0;

    while (i < N)
    {
        zombieHorde[i].setName(name);
        i++;
    }
    return (zombieHorde);
}
