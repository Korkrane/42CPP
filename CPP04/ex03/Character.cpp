/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:41:31 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/20 17:45:58 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("")
{
	std::cout << "Character Default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name) : name(name)
{
	std::cout << "Character constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	std::cout << "Character Copy constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = src;
}

Character &Character::operator=(Character const &rhs)
{
	std::cout << "Character Assignation operator called" << std::endl;
	if(this != &rhs)
	{
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	if(m)
	{
		for (int i = 0; i < 4; i++)
		{
			if(!this->inventory[i])
			{
				this->inventory[i] = m;
				return ;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if(idx >= 0 && idx <= 3)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if((idx >= 0 && idx <= 3) && this->inventory[idx])
		this->inventory[idx]->use(target);
}
