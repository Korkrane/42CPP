/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:09:34 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 19:27:06 by bahaas           ###   ########.fr       */
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
	void	(Karen::*picked_level[4])();
	std::string available_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	for(i = 0; i < 4; i++)
		if(level == available_level[i])
			break;
	picked_level[0] = &Karen::debug;
	picked_level[1] = &Karen::info;
	picked_level[2] = &Karen::warning;
	picked_level[3] = &Karen::error;
	(this->*picked_level[i])();
}

void Karen::debug()
{
	std::cout << "I love to get extra bacon for my 7XL-double-chess-triple-pickle-special-ketchup burger. I just love it !" << std::endl;
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did i would not have to ask for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "I think I deserve to have extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
