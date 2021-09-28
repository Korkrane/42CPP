/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:50 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 17:02:37 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->Animal::type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if(this != &src)
		this->type = src.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}
