/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:50 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 18:02:19 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog const &src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain);
}

Dog &Dog::operator=(Dog const &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
    if(this != &src)
    {
        delete this->brain;
        this->brain = new Brain(*src.brain);
    }
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Waf waf" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}
