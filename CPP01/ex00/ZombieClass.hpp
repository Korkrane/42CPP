/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:39:28 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/21 21:44:12 by bahaas           ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
		void announce(void);
	private:
		std::string name;
};

#endif
