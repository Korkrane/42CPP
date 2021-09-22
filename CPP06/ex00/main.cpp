/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:45:29 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/15 17:50:22 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

void convert(char *str)
{
	Convertor value(str);

	value.tochar();
	value.toint();
	value.tofloat();
	value.todouble();
}
int main(int ac, char **av)
{
	if(ac == 2)
		convert(av[1]);
	else
		std::cout << "Error: Wrong number of arguments" << std::endl;
}
