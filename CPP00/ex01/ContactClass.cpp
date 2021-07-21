/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:35:47 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/21 19:15:32 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

Contact::Contact(void)
{
	this->exist = false;
	return;	
}

Contact::~Contact(void)
{
	return;
}

void Contact::init_data(std::string input, std::string field)
{
	if(field == "first_name")
		this->first_name = input;
	else if(field == "last_name")
		this->last_name = input;
	else if(field == "nickname")
		this->nickname = input;
	else if(field == "phone_number")
		this->phone_number = input;
	else if(field == "darkest_secret")
		this->darkest_secret = input;
	return ;
}

std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

void Contact::display_details()
{
	std::cout << "--- CONTACT DETAILS ---" << std::endl;
	std::cout << "first_name : " << this->first_name << std::endl;
	std::cout << "last_name : " << this->last_name << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phone_number : " << this->phone_number << std::endl;
	std::cout << "darkest_secret : " << this->darkest_secret << std::endl;
}
