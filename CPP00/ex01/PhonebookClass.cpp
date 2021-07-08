/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 15:08:02 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/08 15:13:03 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhonebookClass.hpp"

Phonebook::Phonebook( void ){
	std::cout << "Constructor for Phonebook called" << std::endl;
	return;
}

Phonebook::~Phonebook( void ){
		std::cout << "Destructor for Phonebook called" << std::endl;
	return;
}
