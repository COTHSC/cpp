/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:31:38 by jescully          #+#    #+#             */
/*   Updated: 2022/01/23 17:34:35 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include <iostream>
#include "Weapon.hpp"

class   HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack(void) const;
        void    setWeapon(Weapon &weapon);
};
#endif
