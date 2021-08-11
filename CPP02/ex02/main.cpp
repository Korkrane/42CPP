/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 15:00:28 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/11 17:32:09 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout  << a << std::endl;
	std::cout  << ++a << std::endl;
	std::cout  << a << std::endl;
	std::cout  << a++ << std::endl;
	std::cout  << a << std::endl;

	std::cout  << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;
	Fixed c(2);
	Fixed d(4);
	Fixed e(1.50f);

	std::cout << "--- Personal tests --- " << std::endl;
	std::cout << "c = " << c << " | d = " << d << " | e = " << e << std::endl;
	std::cout << "--- basic operations ---" << std::endl;
	std::cout << "c + e : " << c + e << std::endl;
	std::cout << "c - e : " << c - e << std::endl;
	std::cout << "d / c : " << d / c << std::endl;
	std::cout << "e * d : " << e * d << std::endl;
	std::cout << "--- min/max results ---" << std::endl;
	std::cout << "max(d, c) : " << Fixed::max(d, c) << std::endl;
	std::cout << "min(c, e) : " << Fixed::min(c, e) << std::endl;
	std::cout << "--- bool return value ---" << std::endl;
	std::cout << "c == d : " << (c == d) << std::endl;
	std::cout << "c != d : " << (c != d) << std::endl;
	std::cout << "c <= d : " << (c <= d) << std::endl;
	std::cout << "c >= d : " << (c >= d) << std::endl;
	std::cout << "c < d : " << (c < d) << std::endl;
	std::cout << "c > d : " << (c > d) << std::endl;
	return 0;
}
