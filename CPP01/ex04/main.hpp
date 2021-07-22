/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:03:02 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 18:04:34 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <string>
#include <fstream>

int check_parameters(int ac, char **av);
int check_strings(std::string s1, std::string s2);
int check_file(std::ifstream &filein, std::ofstream &fileout);

#endif
