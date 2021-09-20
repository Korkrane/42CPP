/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:51:11 by mboivin           #+#    #+#             */
/*   Updated: 2021/08/25 14:52:41 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include "Character.hpp"

/*
 * Default constructor
 */

Character::Character( void ) : _name("noname"), _maxNbItems(4), _inventory() {

	std::cout << "Character default constructor called" << std::endl;
}

/*
 * Copy constructor
 */

Character::Character( const Character& src ) : _name(src._name), _maxNbItems(4), _inventory() {

	std::cout << "Character copy constructor called" << std::endl;

	for ( int idx = 0;
		  idx < this->getMaxNbItems() && src.getMateria(idx);
		  idx++ ) {

		this->setMateria( idx, src.getMateria(idx)->clone() );
	}
}

/*
 * Parameterized constructor
 */

Character::Character( std::string name ) : _name(name), _maxNbItems(4), _inventory() {

	std::cout << "Character constructor called" << std::endl;
}

/*
 * Destructor
 */

Character::~Character( void ) {

	std::cout << "Character destructor called" << std::endl;

	for ( int idx = 0; idx < this->getMaxNbItems(); idx++ )
		delete this->_inventory[idx];
}

/*
 * Assignment operator overload
 */

Character&	Character::operator=( const Character& rhs ) {

	std::cout << "Character assignment operator called" << std::endl;

	if ( this != &rhs ) {

		this->_name = rhs.getName();

		for ( int idx = 0; idx < this->getMaxNbItems(); idx++ )
			delete this->_inventory[idx];

		for ( int idx = 0;
			  idx < this->getMaxNbItems() && rhs.getMateria(idx);
			  idx++ ) {

			this->setMateria( idx, rhs.getMateria(idx)->clone() );
		}
	}

	return (*this);
}

/*
 * Getters
 */

const std::string&	Character::getName( void ) const {

	return (this->_name);
}

int	Character::getMaxNbItems( void ) const {

	return (this->_maxNbItems);
}

AMateria*	Character::getMateria( int idx ) const {

	if ( idx >= 0 && idx < this->getMaxNbItems() )
		return ( this->_inventory[idx] );

	return (0);
}

/*
 * Setters
 */

void	Character::setName( const std::string& name ) {

	this->_name = name;
}

void	Character::setMateria( int idx, AMateria* m ) {

	if ( idx >= 0 && idx < this->getMaxNbItems() && m )
		this->_inventory[idx] = m;
}

/*
 * Display inventory content
 */

static std::string	resizeColField( const std::string& str ) {

	if ( str.length() > 21 )
		return ( str.substr(0,21).replace(20, 1, ".") );
	else
		return (str);
}

void	Character::displayInventory( void ) const {

	std::cout << "-----------------------" << std::endl
			  << "|" << std::setw(21) << resizeColField( this->getName() ) << "|" << std::endl
			  << "------ Inventory ------" << std::endl
			  << "|     index|      type|" << std::endl;

	for ( int idx = 0; idx < this->getMaxNbItems(); idx++ ) {

		std::cout << "|" << std::setw(10) << idx;

		if ( this->getMateria(idx) )
			std::cout << "|" << std::setw(10) << this->getMateria(idx)->getType();
		else
			std::cout << "|" << std::setw(10) << ".";

		std::cout << "|" << std::endl;
	}

	std::cout << "-----------------------" << std::endl;
}

/*
 * Add a Materia to the inventory
 */

void	Character::equip( AMateria* m ) {

	if ( !m )
		return ;

	int	idx = 0;

	while ( idx < this->getMaxNbItems() && this->getMateria(idx) )
		idx++;

	if ( idx < this->getMaxNbItems() )
		this->setMateria( idx, m );
}

/*
 * Remove the Materia at index idx from the inventory
 */

void	Character::unequip( int idx ) {

	if ( idx >= 0 && idx < this->getMaxNbItems() && this->getMateria(idx) )
		this->_inventory[idx] = NULL;
}

/*
 * Use the Materia at index idx from inventory to cast a spell
 */

void	Character::use( int idx, ICharacter& target ) {

	if ( idx >= 0 && idx < this->getMaxNbItems() && this->getMateria(idx) )
		this->getMateria(idx)->use(target);
}
