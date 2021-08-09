/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:50 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 20:31:08 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);
		void makeSound() const;
	private:
};

#endif
