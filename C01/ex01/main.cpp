/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:37:20 by jescully          #+#    #+#             */
/*   Updated: 2022/01/22 13:20:49 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main(void)
{
    Zombie *tbKilled;
    int i = 0;
    tbKilled = zombieHorde(42, "jim");
    while (i < 42)
    {
        tbKilled[i++].announce();
    }
    delete [] tbKilled;

    return 0;
}
