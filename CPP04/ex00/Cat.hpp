/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:07:50 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 17:02:45 by bahaas           ###   ########.fr       */
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
		Cat &operator=(Cat const &src);
		void makeSound() const;
	private:
};

#endif
