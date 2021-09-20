/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwag <bkwag@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:31 by bkwag             #+#    #+#             */
/*   Updated: 2021/09/20 19:41:40 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	std::cout << "Default Constructor AMateria" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "Constructor AMateria" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "Destructor AMateria" << std::endl;
}

AMateria::AMateria(const AMateria &character)
{
	std::cout << "Copy AMateria" << std::endl;
	this->_type = character._type;
}

AMateria &AMateria::operator=(AMateria const &character)
{
	std::cout << "Assignation AMateria" << std::endl;
	this->_type = character._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return this->_type;
} //Returns the materia type

unsigned int AMateria::getXP() const //Returns the Materia's XP
{
	return 1;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
