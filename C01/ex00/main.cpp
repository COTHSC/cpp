/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 20:12:28 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 12:28:12 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *tbdel;
    tbdel = newZombie("Jim");
	tbdel->announce();

    delete tbdel;

    randomChump("Jam");

    return 0;
}
