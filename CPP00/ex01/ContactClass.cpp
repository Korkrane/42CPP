/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:44:57 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/08 15:11:18 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ContactClass.hpp"

Contact::Contact( void ){
	std::cout << "Constructor for Contact called" << std::endl;
 return;
}

Contact::~Contact( void ){
	std::cout << "Destructor for Contact called" << std::endl;
	return;
}
