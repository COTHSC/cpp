/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:53:33 by jescully          #+#    #+#             */
/*   Updated: 2022/01/24 15:54:39 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen	Karoline;

	Karoline.complain("debug");
	std::cout << std::endl;
	Karoline.complain("info");
	std::cout << std::endl;
	Karoline.complain("warning");
	std::cout << std::endl;
	Karoline.complain("error");
	/* Karoline.complain("invalid"); */
	/* Karoline.complain(""); */
	return 0;
}
