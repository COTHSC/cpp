/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 19:33:35 by jescully          #+#    #+#             */
/*   Updated: 2022/01/21 20:10:37 by jescully         ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
        void    announce(void) const;
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
