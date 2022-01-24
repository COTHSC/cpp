/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:44:21 by jescully          #+#    #+#             */
/*   Updated: 2022/01/21 09:39:15 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

Phonebook::Phonebook(void)
{
    _lastIndex = -1;
    return ;
}

Phonebook::~Phonebook(void)
{
    return ;
}

void    Phonebook::addContact(void)
{
    if (_lastIndex >= maxContacts - 1)
        _contacts[maxContacts - 1].fillContact(maxContacts - 1);
    else
    {
        _lastIndex++;
        _contacts[_lastIndex].fillContact(_lastIndex);
    }
    std::cout << std::endl;
}

static void displayHeader(void)
{
    std::string header;
    std::string line(43, '-');

    header += "  Index   |";
    header += "First Name|";
    header += " Last Name|";
    header += " Nickname |";
    std::cout << header << std::endl << line << std::endl;
}

void    Phonebook::searchContact(void) const
{
    int         i = 0;
    int         index = -1;
    std::string indexStr;

    if (_lastIndex == -1)
    {
        std::cout << "You have no friends." << std::endl;
        return ;
    }
    displayHeader();
    while (i <= _lastIndex)
        _contacts[i++].showContact();
    std::cout << std::endl;
    while (index < 0 || index > _lastIndex)
    {
        std::cout << "Enter an index ";
        std::getline(std::cin, indexStr);
        index = std::stoi(indexStr);
    }
    _contacts[index].showContactDetails();
    std::cout << std::endl;
}

