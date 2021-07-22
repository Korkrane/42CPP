/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:27:23 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 18:06:59 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string getfile(std::ifstream &filein)
{
	std::string buff;

	for(char ch; filein.get(ch); buff.push_back(ch))
	{
		continue;
	}
	return buff;
}

void find_and_replace(std::string &buff, std::string &s1, std::string &s2)
{
	size_t pos = buff.find(s1);

	while(pos != std::string::npos)
	{
		buff.erase(pos, s1.length());
		buff.insert(pos, s2);
		pos = buff.find(s1, pos);
	}
}

int main(int ac, char **av)
{
	if(check_parameters(ac, av))
	{
		std::string		s1 = av[2];
		std::string		s2 = av[3];

		if(check_strings(s1, s2))
		{
			std::ifstream 	filein(av[1]);
			std::string		ext = ".replace";
			std::ofstream   fileout(av[1] + ext);

			if(check_file(filein, fileout))
			{
				std::string	buff = getfile(filein);

				find_and_replace(buff, s1, s2);
				fileout << buff;
				fileout.close();
				filein.close();
			}	
		}
	}	
}
