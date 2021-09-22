/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertor.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:45:00 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/15 18:25:58 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTOR_HPP
#define CONVERTOR_HPP

#include <iostream>

class Convertor
{
	public:
		Convertor(void);
		Convertor(std::string value);
		~Convertor(void);
		Convertor(Convertor const &src);
		Convertor &operator=(Convertor const &rhs);

		void tochar();
		void toint();
		void tofloat();
		void todouble();
		class UndisplayableException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		std::string value;
};

#endif
