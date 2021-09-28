/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:54:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 18:10:01 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define TOTAL 8

int main()
{
	Animal* animals[TOTAL];

    std::cout << "--- Animal creation ---" << std::endl;

	for(int i = 0; i < TOTAL; i++)
	{
		if(i < TOTAL / 2)
        {
			animals[i] = new Dog();
            std::cout << std::endl;
        }
		else
        {
			animals[i] = new Cat();
            std::cout << std::endl;
        }
	}

    std::cout << "--- Animal destruction ---" << std::endl;
	for(int i = 0; i < TOTAL; i++)
    {
		delete animals[i];
        std::cout << std::endl;
    }

	std::cout << "--- Deep copy ---" << std::endl;
    Dog dog;
    Cat cat;
    std::cout << std::endl;
    {
        Dog copydog = dog;
        Cat copycat = cat;
        for(int i = 0; i < 20; i++)
             std::cout << "Dog idea: " << dog.getBrain()->getIdeas(i)<< " - Copydog idea: "
                 << copydog.getBrain()->getIdeas(i) << std::endl; 
        std::cout << std::endl;
        for(int i = 0; i < 20; i++)
             std::cout << "Cat idea: " << cat.getBrain()->getIdeas(i)<< " - Copydog idea: "
                 << copycat.getBrain()->getIdeas(i) << std::endl; 
        std::cout << std::endl;
    }
    std::cout << std::endl;
    for(int i = 0; i < 5; i++)
        std::cout << "Dog idea: " << dog.getBrain()->getIdeas(i) << std::endl; 
    for(int i = 0; i < 5; i++)
        std::cout << "Cat idea: " << cat.getBrain()->getIdeas(i) << std::endl; 
	return 0;
}
