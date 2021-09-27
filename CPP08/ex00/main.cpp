/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:29:16 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/27 17:06:11 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::cout << "-- vector test ---" << std::endl;
    std::vector<int> v;

    for(int i = 0; i < 5; i++)
        v.push_back(i);
    try
    {
        std::cout << easyfind(v, 4) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
    }
    try
    {
        std::cout << easyfind(v, 42) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
    }

    std::cout << "-- list test ---" << std::endl;
    std::list<int> lst;

    for(int i = 0; i < 5; i++)
        lst.push_back(i);
    try
    {
        std::cout << easyfind(lst, 1) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
    }
    try
    {
        std::cout << easyfind(lst, 42) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error" << std::endl;
    }
}
