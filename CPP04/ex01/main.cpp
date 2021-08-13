/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:54:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 21:19:07 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	int total = 8;
	Animal* Animals[total];

	for(int i = 0; i < total; i++)
	{
		if(i < total / 2)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}

	for(int i = 0; i < total; i++)
	{
		delete Animals[i];
	}
	return 0;
}
