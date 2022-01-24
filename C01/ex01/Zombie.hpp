/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:33:35 by jescully          #+#    #+#             */
/*   Updated: 2022/01/22 13:13:03 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <iostream>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void) const;
        void    setName(std::string name);
};
Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );
#endif
