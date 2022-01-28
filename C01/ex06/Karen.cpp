/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jescully <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 12:11:54 by jescully          #+#    #+#             */
/*   Updated: 2022/01/24 16:00:36 by jescully         ###   ########.fr       */
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

void	Karen::karenfilter(std::string level)
{
	const std::string	levels[4] = {"debug", "info", "warning", "error"}; 
	int i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			break;
		}
		i++;
	}
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	switch(i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
	}
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
