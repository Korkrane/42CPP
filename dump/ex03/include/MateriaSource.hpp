/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 23:49:54 by mboivin           #+#    #+#             */
/*   Updated: 2021/09/08 12:29:35 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

/*
 * A class to store Materias in memory and clone them later
 */

class MateriaSource : public IMateriaSource {

private:

	const int	_maxNbMemories;
	AMateria*	_memory[4];

public:

	MateriaSource( void );
	MateriaSource( const MateriaSource& src );

	virtual ~MateriaSource( void );

	MateriaSource&	operator=( const MateriaSource& rhs );

	// Getters
	int			getMaxNbMemories( void ) const;
	AMateria*	getMateriaFromMemory( int idx ) const;

	// Setters
	void		setMateriaInMemory( int idx, AMateria* m );

	// Member functions
	void		displayMemorizedMaterias( void ) const;
	void		learnMateria( AMateria* m );
	AMateria*	createMateria( const std::string& type );

};

#endif
