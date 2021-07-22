/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:18:04 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 13:20:39 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(5, "duplicate");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
