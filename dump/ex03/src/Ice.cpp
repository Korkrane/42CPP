/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:29:01 by mboivin           #+#    #+#             */
/*   Updated: 2021/08/25 14:49:23 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

/*
 * Default constructor
 */

Ice::Ice( void ) : AMateria("ice") {

	std::cout << "Ice default constructor called" << std::endl;
}

/*
 * Copy constructor
 */

Ice::Ice( const Ice& src ) : AMateria(src._type) {

	std::cout << "Ice copy constructor called" << std::endl;
}

/*
 * Destructor
 */

Ice::~Ice( void ) {

	std::cout << "Ice destructor called" << std::endl;
}

/*
 * Casts an ice spell
 */

void	Ice::use( ICharacter& target ) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/*
 * Returns a new instance of Ice Materia
 */

AMateria*	Ice::clone( void ) const {

	return ( new Ice( *this ) );
}
