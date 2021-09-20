/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:28:49 by mboivin           #+#    #+#             */
/*   Updated: 2021/08/25 14:49:02 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

/*
 * Default constructor
 */

Cure::Cure( void ) : AMateria("cure") {

	std::cout << "Cure default constructor called" << std::endl;
}

/*
 * Copy constructor
 */

Cure::Cure( const Cure& src ) : AMateria(src._type) {

	std::cout << "Cure copy constructor called" << std::endl;
}

/*
 * Destructor
 */

Cure::~Cure( void ) {

	std::cout << "Cure destructor called" << std::endl;
}

/*
 * Casts a healing spell
 */

void	Cure::use( ICharacter& target ) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

/*
 * Returns a new instance of Cure Materia
 */

AMateria*	Cure::clone( void ) const {

	return ( new Cure( *this ) );
}
