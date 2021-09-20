/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 18:46:34 by mboivin           #+#    #+#             */
/*   Updated: 2021/09/08 12:29:20 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

/*
 * A character
 * possesses an inventory of 4 Materia at most
 */

class Character : public ICharacter {

private:

	std::string	_name;
	const int	_maxNbItems;
	AMateria*	_inventory[4];

public:

	Character( void );
	Character( const Character& src );
	Character( std::string name );

	virtual ~Character( void );

	Character&	operator=( const Character& rhs );

	// Getters
	const std::string&	getName( void ) const;
	int					getMaxNbItems( void ) const;
	AMateria*			getMateria( int idx ) const;

	// Setters
	void	setName( const std::string& name );
	void	setMateria( int idx, AMateria* m );

	// Member functions
	void	displayInventory( void ) const;
	void	equip( AMateria* m );
	void	unequip( int idx );
	void	use( int idx, ICharacter& target );

};

#endif
