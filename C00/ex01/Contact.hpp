/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:54:57 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 10:42:25 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        int         _index;
        std::string _firstName;
        std::string _surName;
        std::string _nickName;
        std::string _phoneNumber;
        std::string _darkestSecret;

    public:
        Contact();
        ~Contact();
        void    fillContact(int index);
        void    showContact(void) const;
        void    showContactDetails(void) const;
};

#endif
