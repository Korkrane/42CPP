/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 19:54:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 17:05:32 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongCat* wrongcat = new WrongCat();

	wronganimal->makeSound();
	wrongcat->makeSound();

	std::cout << std::endl << "--- Delete class ---" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wronganimal;
	delete wrongcat;
	return 0;
}
