/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:17:03 by jescully          #+#    #+#             */
/*   Updated: 2022/01/23 17:30:47 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class   Weapon 
{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string const getType(void) const;
        void    setType(std::string type);
};

#endif
