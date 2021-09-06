/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:22:53 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/06 14:00:06 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string new_name):ClapTrap(new_name)
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &src):ClapTrap(src.name)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints;
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target <<
	", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap  has enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}
