/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:09:48 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/08 15:22:22 by bahaas           ###   ########.fr       */
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
	int i = 0;

	while(i < 8)
	{
		if(Phonebook::contact[i]::first_name == NULL)
		{
			std::cout << "Empty spot :)" << std::endl;
			std::cout << "New contact first_name : " << std::endl;
			std::getline(std::cin, input);
		//	contact[i].first_name = input;
		}
		i++;
	}
}

void	search_contact(Phonebook phonebook)
{
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << "|";
	std::cout << std::endl;
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
		{
			std::cout << "go to add" << std::endl;
			add_contact(phonebook);
		}
		else if(input == "EXIT")
			return (0);
		else if(input == "SEARCH")
		{
			std::cout << "go to search" << std::endl;
			search_contact(phonebook);
		}
		else
			std::cout << "Unknown command" << std::endl;
	}

	return (0);
}
