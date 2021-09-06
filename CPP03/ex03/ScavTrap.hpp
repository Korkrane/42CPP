/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:22:53 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/06 13:56:25 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string new_name);
		~ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(ScavTrap const &rhs);
		
		virtual void attack(const std::string &target);
		void guardGate();
	private:
};

#endif
