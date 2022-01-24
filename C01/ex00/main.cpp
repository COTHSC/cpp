/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:12:28 by jescully          #+#    #+#             */
/*   Updated: 2022/01/21 20:38:00 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *tbdel;
    delete newZombie("Jim");
    /* tbdel = newZombie("Jim"); */
    /* delete tbdel; */
    randomChump("Jam");
    return 0;
}
