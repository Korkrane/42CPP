/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:35:47 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/21 19:23:33 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void init_data(std::string, std::string);
		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nickname(void);
		void display_details(void);
		int exist;
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

int contact_list_full(Contact *contacts, int &i);
#endif
