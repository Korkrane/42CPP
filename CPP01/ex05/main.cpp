/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:29:00 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 19:25:48 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen karen;

	karen.complain("DEBUG");
	std::cout << std::endl;
	karen.complain("INFO");
	std::cout << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl;
	karen.complain("ERROR");
}
