/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 21:08:24 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 17:53:41 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const &src);
		Brain &operator=(Brain const &src);
		std::string getIdeas(int i);
        std::string *getAllIdeas();
	private:
		std::string ideas[100];
};

#endif
