/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:31:10 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 19:52:34 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
	Karen karen;

	if(ac == 2)
		karen.complain(av[1]);
	else
		std::cout << "Error: Invalid number of arguments" << std::endl;
}
