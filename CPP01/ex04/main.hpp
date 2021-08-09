/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:03:02 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 22:49:10 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>
#include <fstream>

int display_error(std::string mssg);
int check_parameters(int ac, char **av);
int check_strings(std::string s1, std::string s2);
int check_file(std::ifstream &filein);

#endif
