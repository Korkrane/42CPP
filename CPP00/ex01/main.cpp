/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:36:05 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/21 19:13:23 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void add_details(Contact &contacts, std::string field)
{
	std::string input;

	std::cout << field << " : ";
	std::getline(std::cin, input);
	contacts.init_data(input, field);
}

void add_contact(Contact *contacts)
{
	int i = 0;
	while(contacts[i].exist)
		i++;
	if(i >= 8)
	{
		std::cout << "Error: Contact list is full" << std::endl;
		if(contact_list_full(contacts, i))
			return;
	}
	std::cout << "--- ADD CONTACT ---" << std::endl;
	add_details(contacts[i], "first_name");
	add_details(contacts[i], "last_name");
	add_details(contacts[i], "nickname");
	add_details(contacts[i], "phone_number");
	add_details(contacts[i], "darkest_secret");
	contacts[i].exist = true;
}

int display_contacts(Contact *contacts)
{
	int i = -1;
	std::string data;

	if(!contacts[0].exist)
	{
		std::cout << "YOUR CONTACT LIST IS EMPTY" << std::endl;
		return (0);
	}
	std::cout << "--- CONTACT LIST ---" << std::endl;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << std::endl;
	while(++i < 8)
	{
		if(contacts[i].exist)
		{
			std::cout << std::setw(10) << i + 1 << "|";
			data = contacts[i].get_first_name();
			correct_display(data);
			std::cout << std::setw(10) << data << "|";
			data = contacts[i].get_last_name();
			correct_display(data);
			std::cout << std::setw(10) << data << "|";
			data = contacts[i].get_nickname();
			correct_display(data);
			std::cout << std::setw(10) << data << "|" << std::endl;
		}
	}
	return (1);
}

void search_contact(Contact *contacts)
{
	std::string i;

	if(display_contacts(contacts))
	{
		std::cout << "Select index contact to see details : ";
		std::getline(std::cin, i);
		if((std::atoi(i.c_str()) < 1 || std::atoi(i.c_str()) > 8) || !contacts[std::atoi(i.c_str()) - 1].exist)
		{
			std::cout << "Error: Invalid index selection" << std::endl;
			return;
		}
		else
			contacts[std::atoi(i.c_str()) - 1].display_details();
	}
}

int main(void)
{
	Phonebook phonebook;
	std::string input;

	std::cout << "--- NEW PHONEBOOK ---" << std::endl;
	std::cout << "USE ADD/SEARCH/EXIT" << std::endl;
	while(1)
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if(input.compare("EXIT") == 0)
			return (0);
		else if(input.compare("ADD") == 0)
			add_contact(phonebook.contacts);
		else if(input.compare("SEARCH") == 0)
			search_contact(phonebook.contacts);
		else
			std::cout << "Error: invalid command" << std::endl;
	}
	return (0);
}
