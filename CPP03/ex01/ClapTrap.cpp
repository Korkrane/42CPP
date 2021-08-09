/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:10:17 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 16:48:33 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name) : name(new_name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "Claptrap Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		this->name = rhs.name;
		this->hitPoints = rhs.hitPoints; 
		this->energyPoints = rhs.energyPoints;
		this->attackDamage = rhs.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(std::string const &target)
{
	if(this->energyPoints >= 5)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target <<
		", causing " << this->attackDamage << " points of damage" << std::endl;
		this->energyPoints -= 5;
	}
	else
		std::cout << "ClapTrap " << this->name <<
		" has too low energyPoints to attack" << std::endl;
}	

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount <<
		" points of damage" << std::endl;
	this->hitPoints -= amount;
	if(this->hitPoints <= 0)
		std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
}	

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " is repaired " << amount <<
		" hitPoints and " << amount << " energyPoints" << std::endl;
	this->hitPoints += amount;
	this->energyPoints += amount;
}	

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}
