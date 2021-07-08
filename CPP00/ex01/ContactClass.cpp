/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:44:57 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/08 18:52:41 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ContactClass.hpp"

int	Contact::check_contact(void)
{
	if(!first_name.empty())
		return (0);
	return (1);
}

void	Contact::display_search(void)
{
	std::cout <<  "lol" << std::endl;
	std::cout <<  first_name << std::endl;
	std::cout <<  last_name << std::endl;
}

int Contact::set_contact(int i)
{
	if(first_name.empty())
	{
		index = i;
		std::cout << "New contact first_name : ";
		std::getline(std::cin, first_name);
		std::cout <<  first_name << std::endl;
		std::cout << "New contact last_name : ";
		std::getline(std::cin, last_name);
		std::cout << "New contact nickname : ";
		std::getline(std::cin, nickname);
		std::cout << "New contact phone_number : ";
		std::getline(std::cin, phone_number);
		std::cout << "New contact darkest_secret : ";
		std::getline(std::cin, darkest_secret);
		return (1);
	}
	return (0);
}

Contact::Contact( void ){
	return;
}

Contact::~Contact( void ){
	std::cout << "Destructor for Contact called" << std::endl;
	return;
}
