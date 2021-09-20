/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:54:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/20 16:32:56 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <cstdlib>

int main()
{
	//Animal animal; //Not supposed to work because Animal is an abstract class
	int total = 8;
	Animal* animals[total];

	for(int i = 0; i < total; i++)
	{
		if(i < total / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for(int i = 0; i < total; i++)
		delete animals[i];

	std::cout << "-------------" << std::endl;
	Dog dog;
	Dog copy = dog;
	return 0;
}
