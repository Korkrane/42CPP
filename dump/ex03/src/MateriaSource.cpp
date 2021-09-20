/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:50:47 by mboivin           #+#    #+#             */
/*   Updated: 2021/08/25 14:54:32 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include "MateriaSource.hpp"

/*
 * Default constructor
 */

MateriaSource::MateriaSource( void ) : _maxNbMemories(4), _memory() {

	std::cout << "MateriaSource default constructor called" << std::endl;
}

/*
 * Copy constructor
 */

MateriaSource::MateriaSource( const MateriaSource& src ) : _maxNbMemories(4), _memory() {

	std::cout << "MateriaSource copy constructor called" << std::endl;

	for ( int idx = 0;
		  idx < this->getMaxNbMemories() && src.getMateriaFromMemory(idx);
		  idx++ ) {

		this->setMateriaInMemory( idx, src.getMateriaFromMemory(idx)->clone() );
	}
}

/*
 * Destructor
 */

MateriaSource::~MateriaSource( void ) {

	std::cout << "MateriaSource destructor called" << std::endl;

	for ( int idx = 0; idx < this->getMaxNbMemories(); idx++ )
		delete this->_memory[idx];
}

/*
 * Assignment operator overload
 */

MateriaSource&	MateriaSource::operator=( const MateriaSource& rhs ) {

	std::cout << "MateriaSource assignment operator called" << std::endl;

	if ( this != &rhs ) {

		for ( int idx = 0; idx < this->getMaxNbMemories(); idx++ )
			delete this->_memory[idx];

		for ( int idx = 0;
			  idx < this->getMaxNbMemories() && rhs.getMateriaFromMemory(idx);
			  idx++ ) {

			this->setMateriaInMemory( idx, rhs.getMateriaFromMemory(idx)->clone() );
		}
	}

	return (*this);
}

/*
 * Getters
 */

int	MateriaSource::getMaxNbMemories( void ) const {

	return (this->_maxNbMemories);
}

AMateria*	MateriaSource::getMateriaFromMemory( int idx ) const {

	if ( idx >= 0 && idx < this->getMaxNbMemories() )
		return ( this->_memory[idx] );

	return (0);
}

/*
 * Setters
 */

void	MateriaSource::setMateriaInMemory( int idx, AMateria* m ) {

	if ( idx >= 0 && idx < this->getMaxNbMemories() && m )
		this->_memory[idx] = m;
}

/*
 * Display learnt Materias
 */

void	MateriaSource::displayMemorizedMaterias( void ) const {

	std::cout << "------- Sources ------" << std::endl
			  << "|     index|      type|" << std::endl;

	for ( int idx = 0; idx < this->getMaxNbMemories(); idx++ ) {

		std::cout << "|" << std::setw(10) << idx;

		if ( this->getMateriaFromMemory(idx) )
			std::cout << "|" << std::setw(10) << this->getMateriaFromMemory(idx)->getType();
		else
			std::cout << "|" << std::setw(10) << ".";

		std::cout << "|" << std::endl;
	}

	std::cout << "-----------------------" << std::endl;
}

/*
 * Copy the Materia passed as a parameter, and store it in memory to be cloned later
 */

void	MateriaSource::learnMateria( AMateria* m ) {

	if ( !m )
		return ;

	int	idx = 0;

	while ( idx < this->getMaxNbMemories() && this->getMateriaFromMemory(idx) )
		idx++;

	if ( idx < this->getMaxNbMemories() )
		this->setMateriaInMemory( idx, m );
	else
		std::cout << "* Can't learn new Materias. Memory is full. *" << std::endl;
}

/*
 * Returns a new Materia, which will be a copy of the Materia previously learned by the Source
 * Returns 0 if the type is unknown
 */

AMateria*	MateriaSource::createMateria( const std::string& type ) {

	if ( type == "ice" || type == "cure" ) {

		for ( int idx = 0; idx < this->getMaxNbMemories(); idx++ ) {

			if ( type == this->getMateriaFromMemory(idx)->getType() )
				return ( this->getMateriaFromMemory(idx)->clone() );
		}
	}

	return (0);
}
