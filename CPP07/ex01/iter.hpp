/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:59:18 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/30 12:24:55 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>

template <typename T>
void display(T const &value)
{
	std::cout << value << " ";
}

template <typename T> 
void iter(T *ptr, int len, void (*fnct)(T const &value))
{
	for(int i = 0; i < len; i++)
		(*fnct)(ptr[i]);
	std::cout << std::endl;
}
#endif
