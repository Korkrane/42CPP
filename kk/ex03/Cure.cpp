/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunyoo <hyunyoo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 14:04:37 by bkwag             #+#    #+#             */
/*   Updated: 2021/09/20 19:52:20 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout<<"Default Constructor Cure"<<std::endl;
}

Cure::~Cure()
{
	std::cout<<"Destructor Cure"<<std::endl;
}

Cure::Cure(Cure const &cure):AMateria(cure)
{
	std::cout<<"Copy Cure"<<std::endl;
}

Cure &Cure::operator=(Cure const &cure)
{
	std::cout<<"= Operator Cure"<<std::endl;
	return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}
