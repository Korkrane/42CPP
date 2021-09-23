/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:25:33 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/23 21:33:09 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstring>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(Array const &src);
		Array &operator=(Array const &rhs);
		T &operator[](int index);
		unsigned int	size(void) const;
	private:
		T *arr;
		unsigned int _size;
};

template<typename T>
Array<T>::Array(void) : _size(0), arr(NULL)
{
	std::cout << "Array default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), arr(new T[n])
{
	std::cout << "Array constructor called" << std::endl;
	for(int i = 0; i < n; i++)
		this->arr[i] = T();
}

template<typename T>
Array<T>::Array(Array const &src)
{
	std::cout << "Array copy constructor called" << std::endl;
	this->arr = new T[src.size()];
	for(int i = 0; i < src.size(); i++)
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
		for(int i = 0; i < src.size(); i++)
			this->arr[i] = src.arr[i];
		this->_size = src.size();
	}
	return(*this);
}

template<typename T>
T&	Array<T>::operator[](int index)
{
	if(index < 0 || index > this->size())
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
