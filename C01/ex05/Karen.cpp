/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:11:54 by jescully          #+#    #+#             */
/*   Updated: 2022/01/24 15:53:27 by jescully         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	return;
}

Karen::~Karen()
{
	return;
}

void	Karen::complain(std::string level)
{
	const std::string	levels[4] = {"debug", "info", "warning", "error"}; 
	void (Karen::*functptr[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error} ;
	int i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*functptr[i])();
			return ;
		}
		i++;
	}
	std::cout << "that ain't a level." << std::endl;
	return ;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "This is a violation of my freedom and my first amendment rights." << std::endl;
	return ;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "What do you mean I have to wear a mask?" << std::endl;
	return ;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I demand to speak to the regional director" << std::endl;
	return ;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "I'm calling the police." << std::endl;
	return ;
}
