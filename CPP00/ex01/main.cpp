/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:09:48 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/08 18:51:52 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"

void	add_contact(Phonebook phonebook)
{
	std::string input;
	int i;

	i = -1;
	while(++i < 8)
	{
		if(phonebook.contact[i].set_contact(i) == 1)
			break;
		else
			std::cout << "Phonebook is full" << std::endl;
	}
}

void	search_contact(Phonebook phonebook)
{
	int i;

	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << "|";
	std::cout << std::endl;
	i = -1;
	while(++i < 8)
	{
		if(phonebook.contact[i].check_contact() == 1)
			phonebook.contact[i].display_search();
	}
}

int main(int ac, char **av)
{
	std::string input;
	Phonebook phonebook;

	while(1)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, input);
		if(input == "ADD")
			add_contact(phonebook);
		else if(input == "EXIT")
			return (0);
		else if(input == "SEARCH")
			search_contact(phonebook);
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}
