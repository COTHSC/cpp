/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:02:17 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 10:50:22 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <sstream>
#include <iostream>
#include <iomanip>
#include <string>




Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::fillContact(int index)
{
    _index = index;
    std::cout << "Please fill in the information" << std::endl;
    std::cout << std::setw(17)  << "First Name  ";
    std::getline(std::cin, _firstName);
    std::cout << std::setw(17)  << "Last Name  ";
    std::getline(std::cin, _surName);
    std::cout << std::setw(17)  << " Nickname  ";
    std::getline(std::cin, _nickName);
    std::cout << std::setw(17)  << " Phone Number  ";
    std::getline(std::cin, _phoneNumber);
    std::cout << std::setw(17)  << " Darkest Secret  ";
    std::getline(std::cin, _darkestSecret);
}

static void printTenChar(std::string str)
{
    int         len;
    std::string spaces(10, ' ');

    len = str.length();
    if (len <= 10)
        std::cout << spaces.substr(0, 10 - len) << str;
    else
        std::cout << str.substr(0, 9) << '.';
}

void    Contact::showContact(void) const
{
	int len = 1;
	int temp = _index;
    std::string spaces(10, ' ');

	while (temp / 10 > 0)
		len++;
    if (len <= 10)
        std::cout << spaces.substr(0, 10 - len) << _index;
    else
        std::cout << spaces.substr(0, 9) << _index;
    std::cout << "|";
    printTenChar(_firstName);
    std::cout << "|";
    printTenChar(_surName);
    std::cout << "|";
    printTenChar(_nickName);
    std::cout << std::endl;
}

void    Contact::showContactDetails(void) const
{
    std::cout << std::setw(17) << "First Name  " << _firstName << std::endl;
    std::cout << std::setw(17) << "Last Name  " << _surName << std::endl;
    std::cout << std::setw(17) << "Nickname  " << _nickName << std::endl;
    std::cout << std::setw(17) << "Phone Number  " << _phoneNumber << std::endl;
    std::cout << std::setw(17) << "Darkest Secret  " << _darkestSecret << std::endl;
}
