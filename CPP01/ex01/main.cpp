/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:18:04 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 22:33:13 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 6;
	Zombie *horde = zombieHorde(n, "duplicate");
	for (int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
