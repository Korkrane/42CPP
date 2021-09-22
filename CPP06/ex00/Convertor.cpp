/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:45:01 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/15 18:21:29 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

Convertor::Convertor() : value("")
{
	std::cout << "Convertor Default constructor called" << std::endl;
}

Convertor::Convertor(std::string value): value(value)
{
	std::cout << "Convertor constructor called" << std::endl;
}

Convertor::Convertor(Convertor const &src)
{
	std::cout << "Convertor Copy constructor called" << std::endl;
	*this = src;
}

Convertor &Convertor::operator=(Convertor const &rhs)
{
	std::cout << "Convertor Assignation operator called" << std::endl;
	if(this != &rhs)
		this->value = rhs.value;
	return *this;
}

Convertor::~Convertor()
{
	std::cout << "Convertor Destructor called" << std::endl;
}

// OPERATOR FUNCTION

Convertor::operator char(void) const
{

}

Convertor::operator int(void) const
{

}

Convertor::operator float(void) const
{

}

Convertor::operator double(void) const
{

}
