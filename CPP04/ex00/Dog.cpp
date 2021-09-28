/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:50 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 17:03:05 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->Animal::type = "Dog";
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = src;
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if(this != &src)
		this->type = src.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Waf waf" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}
