/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:43:53 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/20 19:24:40 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : max(0)
{
	std::cout << "MateriaSource Default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
		this->source[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	for(int i = 0; i < src.max; i++)
		this->learnMateria(src.source[i]->clone());
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	/*
	std::cout << "MateriaSource Assignation operator called" << std::endl;
	if(this != &rhs)
	{
		this->max = rhs.max;
		for (int i = 0; i < rhs.max; i++)
			if (this->source[i])
				delete this->source[i];
		for (int i = 0; i < rhs.max; i++)
			if (rhs.source[i])
				this->source[i] = rhs.source[i]->clone();
	}
	return *this;
	*/
		std::cout<<"= Operator MateriaSource"<<std::endl;
	this->max = 0;
	for(int i = 0; i < rhs.max; i++)
		this->learnMateria(rhs.source[i]->clone());
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	/*
	for (int i = 0; i < 4; i++)
		if (this->source[i])
			delete this->source[i];
	*/
			for(int i=0; i<max; i++)
	{
		delete source[i];
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	/*
	for (int i = 0; i < 4; i++)
	{
		if (!this->source[i])
		{
			this->source[i] = materia;
			return ;
		}
	}
	*/
	if (this->max  == 4 || materia == 0)
		return ;
	this->source[this->max++] = materia;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	/*
	for(int i = 0; i < 4; i++)
		if(this->source[i]->getType() == type)
			return this->source[i]->clone();
	return NULL;
	*/
		for(int i=0; i<this->max; i++)
	{
		if(this->source[i]->getType() == type)
		{
			return this->source[i]->clone();
		}
	}
	return NULL;
}
