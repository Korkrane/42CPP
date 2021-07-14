/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:36:05 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/14 17:49:09 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"
#include <string>

void add_contact(Contact *contacts)
{
	int i = 0;
	std::string input;

	while(!contacts[i].exist)
		i++;
	if(i >= 8)
		return ;
	std::cout << "first_name : ";
	std::getline(std::cin, input);
	contacts[i].init_data(input);
	
}

int main(void)
{
	Phonebook phonebook;
	std::string input;

	while(1)
	{
		std::cout << "New command: ";
		std::getline(std::cin, input);
		if(input == "EXIT")
			return (0);
		if(input == "ADD")
			add_contact(phonebook.contacts);
	}
}
