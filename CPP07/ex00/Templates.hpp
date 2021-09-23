/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:42:21 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/23 18:02:54 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>

template <typename T>
void swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T const max(T const x, T const y)
{
	if(x > y)
		return x;
	return y;
}

template <typename T>
T const min(T const x, T const y)
{
	if(x > y)
		return y;
	return x;
}

#endif
