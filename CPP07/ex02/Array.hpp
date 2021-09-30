/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:25:33 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/30 12:34:40 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		virtual ~Array(void);
		Array(Array const &src);
		Array &operator=(Array const &rhs);
		T &operator[](unsigned int index);
		unsigned int	size(void) const;
	private:
		unsigned int _size;
		T *arr;
};

template<typename T>
Array<T>::Array(void) : _size(0), arr(new T[0])
{
	std::cout << "Array default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), arr(new T[n])
{
	std::cout << "Array constructor called" << std::endl;
	for(unsigned int i = 0; i < n; i++)
		this->arr[i] = T();
}

template<typename T>
Array<T>::Array(Array const &src)
{
	std::cout << "Array copy constructor called" << std::endl;
	this->arr = new T[src.size()]();
	for(unsigned int i = 0; i < src.size(); i++)
		this->arr[i] = src.arr[i];
	this->_size = src.size();
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &src)
{
	std::cout << "Array assignment operator called" << std::endl;
	if(this != &src)
	{
		if(this->arr)
			delete [] this->arr;
		this->arr = new T[src.size()];
		for(unsigned int i = 0; i < src.size(); i++)
			this->arr[i] = src.arr[i];
		this->_size = src.size();
	}
	return(*this);
}

template<typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if(index < 0 || index >= this->size())
		throw std::exception();
	return this->arr[index];
}

template<typename T>
unsigned int	Array<T>::size(void) const
{
	return this->_size;
}


template<typename T>
Array<T>::~Array(void)
{
	std::cout << "Array destructor called" << std::endl;
	delete [] this->arr;
}
#endif
