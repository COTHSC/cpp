/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:56:41 by jescully          #+#    #+#             */
/*   Updated: 2022/01/23 16:01:58 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPointer = &str;
    std::string &stringReference = str;

    std::cout << "String's address: " << &str << std::endl;
    std::cout << "StringPointer " << stringPointer << std::endl;
    std::cout << "StringReference " << &stringReference << std::endl;
    std::cout << "String's content: " << str << std::endl;
    std::cout << "StringPointer " << *stringPointer << std::endl;
    std::cout << "StringReference " << stringReference << std::endl;
    return 0;
}
