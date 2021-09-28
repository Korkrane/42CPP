/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:35:52 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 18:19:38 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
		std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	this->type = src.type;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	std::cout << "AMateria Assignation operator called" << std::endl;
	this->type = src.type;
	return *this;
}

AMateria::~AMateria()
{
		std::cout << "AMateria Destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter&)
{
}
