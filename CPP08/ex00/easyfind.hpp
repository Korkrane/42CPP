/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:15:02 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/27 17:34:56 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template<typename T>
int easyfind(T contain, int i)
{
    typename T::iterator it = std::find(contain.begin(), contain.end(), i);
   
    if(it == contain.end())
        throw std::exception();
    return *it;
}

#endif
