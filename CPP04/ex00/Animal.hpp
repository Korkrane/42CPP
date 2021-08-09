/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:49 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 21:02:52 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(Animal const &src);
		Animal &operator=(Animal const &rhs);
		std::string getType() const;
		virtual void makeSound() const;
	protected:
		std::string type;
};

#endif
