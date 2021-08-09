/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:11:04 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 20:39:47 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->WrongAnimal::type = "WrongCat";
	std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	if(this != &rhs)
	{
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrongmeow wrongmeow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}
