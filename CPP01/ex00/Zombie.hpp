/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:39:28 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 12:52:24 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string);
		~Zombie(void);
		void announce(void);
		void set_name(std::string);
	private:
		std::string name;
};

void 	randomChump(std::string name);
Zombie	*newZombie(std::string name);

#endif
