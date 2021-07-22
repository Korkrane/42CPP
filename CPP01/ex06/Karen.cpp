/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:09:34 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 19:51:13 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
}

Karen::~Karen()
{
}

void Karen::complain(std::string level)
{
	void	(Karen::*picked_level[5])();
	std::string available_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for(i = 0; i < 4; i++)
		if(level == available_level[i])
			break;
	picked_level[0] = &Karen::debug;
	picked_level[1] = &Karen::info;
	picked_level[2] = &Karen::warning;
	picked_level[3] = &Karen::error;
	picked_level[4] = &Karen::unknown;
	switch(i)
	{
		case 0:		(this->*picked_level[0])();
		case 1:		(this->*picked_level[1])();
		case 2:		(this->*picked_level[2])();
		case 3: 	(this->*picked_level[3])(); 
		case 4: 	(this->*picked_level[4])(); 
	}
}

void Karen::unknown()
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::debug()
{
	std::cout << "[ DEBUG ]\n"
		"I love to get extra bacon for my 7XL-double-chess-triple-pickle-special-ketchup burger.\n"
		"I just love it !\n" << std::endl;
}

void Karen::info()
{
	std::cout << "[ INFO ]\n"
		"I cannot believe adding extra bacon cost more money.\n"
		" You don't put enough! If you did i would not have to ask for it!\n" << std::endl;
}

void Karen::warning()
{
	std::cout << "[ WARNING ]\n"
		"I think I deserve to have extra bacon for free.\n"
		"I've been coming here for years and you just started working here last month.\n" << std::endl;
}

void Karen::error()
{
	std::cout << "[ ERROR ]\n"
		"This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}
