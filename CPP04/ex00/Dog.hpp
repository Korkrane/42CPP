/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:49 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 17:03:11 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const &src);
		Dog &operator=(Dog const &src);
		void makeSound() const;
	private:
};

#endif
