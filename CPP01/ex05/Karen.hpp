/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:09:34 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 18:12:28 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_CLASS_HPP
#define KAREN_CLASS_HPP

#include <string>
#include <iostream>

class Karen
{
	public:
		Karen(void);
		~Karen(void);
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif
