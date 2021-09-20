/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboivin <mboivin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:12:34 by mboivin           #+#    #+#             */
/*   Updated: 2021/09/05 15:37:14 by mboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;

/*
 * An interface to store Materias
 */

class IMateriaSource {

public:

	virtual ~IMateriaSource() {}

	virtual void		learnMateria( AMateria* ) = 0;
	virtual AMateria*	createMateria( const std::string& type ) = 0;

};

#endif
