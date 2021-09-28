/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:11:04 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 17:03:51 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat const &src);
		WrongCat &operator=(WrongCat const &src);
		void makeSound() const;
	private:
};

#endif
