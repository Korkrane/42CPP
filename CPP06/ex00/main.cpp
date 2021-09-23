/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:45:29 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/23 16:03:49 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int	isInvalidValue(char* pEnd)
{
	if(!pEnd || !(*pEnd))
		return(0);
	for(int i = 1; pEnd[i]; ++i)
		if(!isspace(pEnd[i]))
			return(1);
	return(0);
}

void stringConversion(char *str)
{
	char *pEnd;

	double value;

	if(strlen(str) == 1 && !isdigit(*str))
		value = static_cast<double>(*str);
	else
	{
		value = std::strtod(str, &pEnd);
		if(isInvalidValue(pEnd))
		{
			std::cout << "Error: Invalid input (type literal value)" << std::endl;
			return;
		}
	}
	executeConversion(value);
}

int main(int ac, char **av)
{
	if(ac == 2)
		stringConversion(av[1]);
	else
		std::cout << "Error: Wrong number of arguments" << std::endl;
	return(0);
}
