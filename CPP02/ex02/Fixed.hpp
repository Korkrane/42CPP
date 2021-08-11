/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 15:00:23 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/11 17:19:06 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const float);
		Fixed(const int);
		~Fixed(void);

		Fixed &operator=(Fixed const &rhs);

		bool operator>(Fixed const& rhs);
		bool operator>=(Fixed const& rhs);
		bool operator<(Fixed const& rhs);
		bool operator<=(Fixed const& rhs);
		bool operator==(Fixed const& rhs);
		bool operator!=(Fixed const& rhs);

		Fixed operator+(Fixed const &rhs);
		Fixed operator-(Fixed const &rhs);
		Fixed operator*(Fixed const &rhs);
		Fixed operator/(Fixed const &rhs);

		Fixed operator ++(int); // post increment
		Fixed operator --(int); //post decrement
		Fixed &operator ++(); //pre increment
		Fixed &operator --(); // pre decrement
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int n;
		static const int bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs); //surcharge de fonction pas surcharge de fonction membre., 1er param une instance de ostream 2classe

#endif
