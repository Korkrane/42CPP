/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:36:45 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/27 21:18:12 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) :  len(0), total(0)
{
    std::cout << "Span Default constructor called" << std::endl;
}

Span::Span(unsigned int n) : len(n), total(0)
{
    std::cout << "Span constructor called" << std::endl;
}

Span::Span(const Span &src)
{
    std::cout << "Span copy constructor called" << std::endl;
    *this = src;
}

Span &Span::operator=(Span const &src)
{
    std::cout << "Span assignment operator called" << std::endl;
    if(this != &src)
    {
        this->v = src.v;
    }
    return(*this);
}

Span::~Span(void)
{
    std::cout << "Span destructor called" << std::endl;
}

int Span::shortestSpan()
{
    if (this->len <= 1)
        throw Span::elementsException();
    else
    {
        std::sort(this->v.begin(), this->v.end());
        return (v[1] - v[0]);
    }
}

int Span::longestSpan()
{
    if (this->len <= 1)
        throw Span::elementsException();
    else
    {
        std::vector<int>::iterator min = std::min_element(this->v.begin(), this->v.end());
        std::vector<int>::iterator max = std::max_element(this->v.begin(), this->v.end());
        return (*max - *min);
    }
}

void Span::addNumber(int n)
{
    if(len == total)
        throw Span::memoryException();
    else
    {
        this->v.push_back(n);
        this->total++;
    }
}

void    Span::addNumbers(int *numbers, int size)
{
    std::vector<int>::iterator it = this->v.begin();

    if ((this->total + size) <= this->len)
    {
        this->v.insert(it , numbers , numbers + size);
        this->total += size;
    }
    else
        throw(Span::memoryException());
}
std::vector<int> Span::getV()
{
    return this->v;
}

void Span::display()
{
    for(std::vector<int>::iterator it = this->v.begin(); it < this->v.end(); it++)
        std::cout << *it << std::endl;
}

const char* Span::memoryException::what() const throw()
{
    return "Exception: Not enough memory";
}

const char* Span::elementsException::what() const throw()
{
    return "Exception: Not enough elements";
}
