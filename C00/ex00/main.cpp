/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <jescully@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:10:37 by jescully          #+#    #+#             */
/*   Updated: 2022/01/17 23:25:39 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include <iostream> 


int main(void)
{
    Sample  instance;

    instance.foo = 42;
    std::cout << "this is foo ";
    std::cout << instance.foo << std::endl;
    instance.bam();
    return 0;

}
