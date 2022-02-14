/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:35:44 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 12:35:55 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
