/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:29:17 by jescully          #+#    #+#             */
/*   Updated: 2022/01/21 09:36:15 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

static void	printHelp(void)
{
	std::cout << "Use ADD to add a contact to your phonebook." << std::endl;
	std::cout << "Use SEARCH to display your phonebook." << std::endl;
	std::cout << "Use EXIT to quit." << std::endl << std::endl;
}

int main(void)
{
    Phonebook   phonebook;
    std::string cmd;

    printHelp();
    while (std::getline(std::cin, cmd))
    {
        if (cmd == "ADD")
            phonebook.addContact();
        else if (cmd == "SEARCH")
            phonebook.searchContact();
        else if (cmd == "EXIT")
            return 0;
        else
            std::cout << "Try again" << std::endl;
    }
    return 0;
    /* displayHeader(); */
}
