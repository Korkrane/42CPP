/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:49 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/20 16:02:38 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const &src);
		Dog &operator=(Dog const &rhs);
		void makeSound() const;
		Brain *getBrain();
	private:
		Brain *brain;
};

#endif
