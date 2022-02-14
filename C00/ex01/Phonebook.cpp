/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:44:21 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 11:33:08 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <sstream>
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
	{
        _contacts[_lastIndex % (maxContacts - 1)].fillContact(_lastIndex % (maxContacts - 1));
		_lastIndex++;
	}
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
    while (i <= _lastIndex && i < 8)
        _contacts[i++].showContact();
    while (7)
    {
		if (index == -1)
			std::cout << "Enter an index ";
		else
			std::cout << "Enter a VALID index pretty please ";
        std::getline(std::cin, indexStr);
		std::istringstream iss (indexStr);
		iss >> index;
		if (isdigit(indexStr[0]) && indexStr.size() == 1)
		{
			if (index >= 0 && index <= _lastIndex && index < 8)
			{
				_contacts[index].showContactDetails();
				std::cout << std::endl;
				return ;
			}
		}
	}
}
