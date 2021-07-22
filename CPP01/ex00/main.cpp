/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 11:44:59 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 12:52:04 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string names[8] = {"Bob", "Tot", "Dod", "Zoz", "Fof", "Ror", "Pop", "Joj"};

	Zombie *zombies = new Zombie[4];
	Zombie *five = newZombie(names[4]);
	Zombie *six = newZombie(names[5]);
	Zombie *seven = newZombie(names[6]);
	for (int i = 0; i < 4; i++)
		zombies[i].set_name(names[i]);
	five->announce();
	six->announce();
	seven->announce();
	for (int i = 0; i < 4; i++)
		zombies[i].announce();
	delete five;
	delete six;
	delete seven;
	delete [] zombies;
	randomChump(names[7]);
	return (0);
}
