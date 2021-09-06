/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:15:22 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/06 13:50:07 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(std::string new_name);
		~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap &operator=(DiamondTrap const &rhs);
		
		void attack(const std::string &target);
		void whoAmI(void);
	private:
		std::string name;
};

#endif
