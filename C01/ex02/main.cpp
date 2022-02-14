/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:56:41 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 17:43:16 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String's address: " << &str << std::endl;
    std::cout << "StringPointer " << stringPTR << std::endl;
    std::cout << "StringReference " << &stringREF << std::endl;
    std::cout << "String's content: " << str << std::endl;
    std::cout << "StringPointer " << *stringPTR << std::endl;
    std::cout << "StringReference " << stringREF << std::endl;
    return 0;
}
