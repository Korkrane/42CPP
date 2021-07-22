/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 14:16:09 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 16:25:22 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon(std::string);
		~Weapon(void);
		const std::string &getType();
		void setType(std::string);
	private:
		std::string type;
};

#endif
