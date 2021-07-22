/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:24:56 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/22 13:35:52 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "address: " << &string << std::endl;
	std::cout << "address with reference: " << &stringREF << std::endl;
	std::cout << "address with pointer: " << stringPTR << std::endl;
	std::cout << std::endl;
	std::cout << "content with reference: " << stringREF << std::endl;
	std::cout << "content with pointer: " << *stringPTR << std::endl;
}
