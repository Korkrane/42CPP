/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 15:00:23 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/11 17:34:05 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//CONSTRUCTOR & DESTRUCTOR 
//
Fixed::Fixed(void) : n(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int n)
{
	this->n = n << this->bits;
}

Fixed::Fixed(const float n)
{
	this->n = roundf(n * (1 << this->bits));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->n = rhs.getRawBits();
	return *this;
}

//MEMBER FUNCTIONS

float Fixed::toFloat(void) const
{
	float res = (float)(this->n) / (1 << this->bits); 
	return res;
}

int Fixed::toInt(void) const
{
	int res = (int)(this->n) / (1 << this->bits);
	return res;
}

int Fixed::getRawBits(void) const
{
	return this->n;
}

void Fixed::setRawBits(int const raw)
{
	this->n = raw;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if(a.n < b.n)
		return a;
	return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if(a.n > b.n)
		return a;
	return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if(a.n < b.n)
		return a;
	return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if(a.n > b.n)
		return a;
	return b;
}

//OPERATOR OVERLOADS

Fixed Fixed::operator+(Fixed const &rhs)
{
	return Fixed(toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	return Fixed(toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	return Fixed(toFloat() / rhs.toFloat());
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

//INCREMENT AND DECREMENT OPERATORS

Fixed &Fixed::operator++()
{
	this->n++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed &Fixed::operator--()
{
	this->n--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

//COMPARISON OPERATORS

bool Fixed::operator>(Fixed const &rhs)
{
	return(this->n > rhs.n);
}

bool Fixed::operator>=(Fixed const &rhs)
{
	return(this->n >= rhs.n);
}

bool Fixed::operator<(Fixed const &rhs)
{
	return(this->n < rhs.n);
}

bool Fixed::operator<=(Fixed const &rhs)
{
	return(this->n <= rhs.n);
}

bool Fixed::operator==(Fixed const &rhs)
{
	return(this->n == rhs.n);
}

bool Fixed::operator!=(Fixed const &rhs)
{
	return(this->n != rhs.n);
}
