/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:28:31 by mboivin           #+#    #+#             */
/*   Updated: 2021/09/08 12:29:30 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

/*
 * An Ice Materia to invoke ice
 */

class Ice : public AMateria {

public:

	Ice( void );
	Ice( const Ice& src );

	virtual ~Ice( void );

	Ice&	operator=( const Ice& rhs ) = delete;

	// Member functions
	AMateria*	clone( void ) const;
	void		use( ICharacter& target );

};

#endif
