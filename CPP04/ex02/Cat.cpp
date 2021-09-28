/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:50 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 18:02:40 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
}

Cat &Cat::operator=(Cat const &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
    if(this != &src)
    {
        delete this->brain;
        this->brain = new Brain(*src.brain);
    }
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow" << std::endl;
}

Brain *Cat::getBrain()
{
	return this->brain;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}
