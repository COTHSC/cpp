/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:53:33 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 16:09:38 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	Karoline;

	if (argc != 2)
	{
		std::cout << "There are too few, or too many arguments. The accepted number of arguments is one. Please enter a single argument." << std::endl;
		return 1;
	}
	else
		Karoline.karenfilter(argv[1]);
	return 0;
}
