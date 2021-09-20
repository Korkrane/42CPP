/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:27:08 by mboivin           #+#    #+#             */
/*   Updated: 2021/09/08 12:29:28 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

/*
 * A Cure Materia to cast healing spells
 */

class Cure : public AMateria {

public:

	Cure( void );
	Cure( const Cure& src );

	virtual ~Cure( void );

	Cure&	operator=( const Cure& rhs ) = delete;

	// Member functions
	AMateria*	clone( void ) const;
	void		use( ICharacter& target );

};

#endif
