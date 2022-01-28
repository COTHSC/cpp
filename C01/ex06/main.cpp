/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:53:33 by jescully          #+#    #+#             */
/*   Updated: 2022/01/24 15:39:26 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	Karoline;

	if (argc != 2)
	{
		std::cout << "There are too few, or too many arguments. the accepted number of arguments is one. Please enter a single argument." << std::endl;
		return 1;
	}
	else
		Karoline.karenfilter(argv[1]);
	/* Karoline.karenfilter("debug"); */
	/* std::cout << std::endl; */
	/* Karoline.karenfilter("info"); */
	/* std::cout << std::endl; */
	/* Karoline.karenfilter("warning"); */
	/* std::cout << std::endl; */
	/* Karoline.karenfilter("error"); */
	/* std::cout << std::endl; */
	/* Karoline.karenfilter("sdfghjk"); */
	/* std::cout << std::endl; */
	return 0;
}
