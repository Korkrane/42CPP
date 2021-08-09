/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 21:39:28 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 22:32:53 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "<" << this->name << ">" << " is reborn" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << this->name << ">" << " is finally dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
