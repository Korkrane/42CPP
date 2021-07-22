/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:12:22 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 13:17:32 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
 	Zombie *zombies = new Zombie[n];
	
	for (int i = 0; i < n; i++)
		zombies[i].set_name(name);
	return zombies;
}
