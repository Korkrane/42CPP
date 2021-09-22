/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:45:29 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/22 17:15:29 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

void tochar(double value)
{

	if(value >= 32 && value <= 126)
		std::cout <<  "char: '" << static_cast<char>(value) << "'" << std::endl;
	else if(value < 0 || value > 127 || std::isnan(value))
		std::cout << "char: Impossible" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
}

void toint(double value)
{
	if(value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() || std::isnan(value))
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
}

int	isValidValue(char* endptr)
{
	int i = 0;

	if(!endptr || !(*endptr))
		return(0);
	while(endptr[++i])
		if(!isspace(endptr[i]))
			return(1);
	return(0);
}

void convert(char *str)
{
	char *pEnd;

	double value;

	if(strlen(str) == 1 && !isdigit(*str))
		value = static_cast<double>(*str);
	else
	{
		value = std::strtod(str, &pEnd);
		if(isValidValue(pEnd))
		{
			std::cout << "Error: Invalid input (type literal value)" << std::endl;
			return;
		}
	}
	tochar(value);
	toint(value);
	//	tofloat();
	//	todouble();
}
int main(int ac, char **av)
{
	if(ac == 2)
		convert(av[1]);
	else
		std::cout << "Error: Wrong number of arguments" << std::endl;
}
