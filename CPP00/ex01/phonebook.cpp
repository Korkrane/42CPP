/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:09:48 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/07 21:15:14 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

void	add_contact(void)
{

}

void	search_contact(void)
{

}

int main(int ac, char **av)
{
	std::string input;
	Contact contact[8];

	while(1)
	{
		std::cout << "Enter a command : ";
		std::getline(std::cin, input);
		if(input == "ADD")
		{
			std::cout << "go to add" << std::endl;
			add_contact();
		}
		else if(input == "EXIT")
			return (0);
		else if(input == "SEARCH")
		{
			std::cout << "go to search" << std::endl;
			search_contact();
		}
		else
			std::cout << "Unknown command" << std::endl;
	}

	return (0);
}
