/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:03:25 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/23 16:03:38 by bahaas           ###   ########.fr       */
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

void tofloat(double value)
{
	if(value == std::floor(value) && !std::isinf(value))
		std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
}

void todouble(double value)
{
	if(value == std::floor(value) && !std::isinf(value))
		std::cout << "double: " << static_cast<double>(value) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void executeConversion(double value)
{
	tochar(value);
	toint(value);
	tofloat(value);
	todouble(value);
}
