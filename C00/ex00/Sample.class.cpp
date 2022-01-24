/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:28:06 by jescully          #+#    #+#             */
/*   Updated: 2022/01/17 23:22:14 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(void)
{
    std::cout << "The constuctor was called, its talking now" << std::endl;
    return ;
}

Sample::~Sample(void)
{
    std::cout << "The destructor was called, its talking now" << std::endl;
    return ;
}

void    Sample::bam(void)
{
    std::cout << "bam bam" << std::endl;
    return ;
}
