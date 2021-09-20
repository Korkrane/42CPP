/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:37:10 by mboivin           #+#    #+#             */
/*   Updated: 2021/08/25 14:48:47 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"

/*
 * Default constructor
 */

AMateria::AMateria( void ) : _type("unknown") {

	std::cout << "AMateria default constructor called" << std::endl;
}

/*
 * Copy constructor
 */

AMateria::AMateria( const AMateria& src ) : _type(src._type) {

	std::cout << "AMateria copy constructor called" << std::endl;
}

/*
 * Parameterized constructor
 */

AMateria::AMateria( const std::string& type ) : _type(type) {

	std::cout << "AMateria constructor called" << std::endl;
}

/*
 * Destructor
 */

AMateria::~AMateria( void ) {

	std::cout << "AMateria destructor called" << std::endl;
}

/*
 * Getters
 */

const std::string&	AMateria::getType( void ) const {

	return (this->_type);
}

/*
 * Casts a spell using Materia's type to target
 */

void	AMateria::use( ICharacter& target ) {

	if ( this->getType() == "ice" ) {

		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

	} else if ( this->getType() == "cure" ) {

		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;

	} else {

		std::cout << "* can't use unknown type Materia *" << std::endl;
	}
}
