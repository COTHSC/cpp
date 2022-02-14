/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:53:33 by jescully          #+#    #+#             */
/*   Updated: 2022/02/14 15:57:37 by jescully         ###   ########.fr       */
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
	std::cout << std::endl;
	Karoline.complain("invalid");
	std::cout << std::endl;
	Karoline.complain("");
	return 0;
}
