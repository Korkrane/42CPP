/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 19:07:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/21 19:13:31 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int contact_list_full(Contact *contacts, int &i)
{
	std::string input;
	while(1)
	{
		std::cout << "Do you want to replace a contact (Y/N) ";
		std::getline(std::cin, input);
		if(input == "Y")
		{
			std::cout << "Select index contact to replace : ";
			std::getline(std::cin, input);
			if((std::atoi(input.c_str()) < 1 || std::atoi(input.c_str()) > 8)
					|| !contacts[std::atoi(input.c_str()) - 1].exist)
				std::cout << "Error: Invalid index selection" << std::endl;
			else
			{
				i = std::atoi(input.c_str()) - 1;
				break;
			}
		}
		else if(input == "N")
			return (1);
	}
	return (0);
}

void correct_display(std::string &data)
{
	if(data.length() > 10)
	{
		while(data.length() > 10)
			data.pop_back();
		data.back() = '.';
	}
}
