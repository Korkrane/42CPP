/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 15:00:28 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/03 15:26:28 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
//	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

//	std::cout  << a << std::endl;
//	std::cout  << ++a << std::endl;
//	std::cout  << a << std::endl;
//	std::cout  << a++ << std::endl;
//	std::cout  << a << std::endl;

	std::cout  << b << std::endl;


//	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
