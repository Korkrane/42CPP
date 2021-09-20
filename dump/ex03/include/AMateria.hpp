/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 15:33:22 by mboivin           #+#    #+#             */
/*   Updated: 2021/09/05 15:37:14 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

/*
 * Abstract class that represents a Materia
 * Materias are crystallized memories of weapons or spells in Final Fantasy
 */

class AMateria {

protected:

	const std::string	_type;

public:

	AMateria( void );
	AMateria( const AMateria& src );
	AMateria( const std::string& type );

	virtual ~AMateria( void );

	AMateria&	operator=( const AMateria& rhs ) = delete;

	// Getters
	const std::string&	getType( void ) const;

	// Member functions
	virtual AMateria*	clone( void ) const = 0;
	virtual void		use( ICharacter& target );

};

#endif
