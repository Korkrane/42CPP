/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 15:00:23 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/03 15:26:13 by bahaas           ###   ########.fr       */
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

		bool operator>(Fixed const& rhs) const;
		bool operator>=(Fixed const& rhs) const;
		bool operator<(Fixed const& rhs) const;
		bool operator<=(Fixed const& rhs) const;
		bool operator==(Fixed const& rhs) const;
		bool operator!=(Fixed const& rhs) const;

		Fixed operator+(Fixed const &rhs) const;
		Fixed operator-(Fixed const &rhs) const;
		Fixed operator*(Fixed const &rhs) const;
		Fixed operator/(Fixed const &rhs) const;

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
