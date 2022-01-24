/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:10:25 by jescully          #+#    #+#             */
/*   Updated: 2022/01/20 18:14:30 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
# include <iomanip>
# include <string>

#define maxContacts 8

class Phonebook
{
    private:
        int     _lastIndex;
        Contact _contacts[8];
    public:
        Phonebook();
        ~Phonebook();
        void    addContact(void);
        void    searchContact(void) const;
};
#endif
