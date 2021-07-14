/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:35:34 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/14 17:43:12 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <string>
#include <iostream>
#include "ContactClass.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		Contact contacts[8];
	private:
};

#endif
