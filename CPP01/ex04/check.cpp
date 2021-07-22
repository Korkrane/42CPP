/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 17:59:11 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 18:04:11 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

static int display_error(std::string mssg)
{
	std::cout << mssg << std::endl;
	return (0);
}

int check_parameters(int ac, char **av)
{
	if(ac < 4 || ac > 5)
		return(display_error("Error: Wrong number of arguments"));
	return (1);
}

int check_strings(std::string s1, std::string s2)
{
	if(s1.empty() || s2.empty())
		return(display_error("Error: One of the string is empty"));
	return (1);
}

int check_file(std::ifstream &filein, std::ofstream &fileout)
{
	if(!filein.is_open() || !fileout.is_open())
		return(display_error("Error: One of the file couldn't open"));
	return (1);
}
