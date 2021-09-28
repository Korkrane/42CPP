/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:43:23 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 20:06:25 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int i = rand() % 3;
	Base *base = NULL;

	switch(i)
	{
		case 1:
			base = new A();
			std::cout << "A class has been generated" << std::endl;
			break;
		case 2:
			base = new B();
			std::cout << "B class has been generated" << std::endl;
			break;
		default:
			base = new C();
			std::cout << "C class has been generated" << std::endl;
			break;
	}
	return base;
}

void identify(Base *p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl << std::endl;
        (void)a;
	}
	catch(std::exception &e)
	{}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl << std::endl;
        (void)b;
	}
	catch(std::exception &e)
	{}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl << std::endl;
        (void)c;
	}
	catch(std::exception &e)
	{}
}

int main()
{
	for(int i = 0; i < 8; i++)
	{
		Base *base = generate();
		identify(base);
		identify(*base);
		delete(base);
	}
	return 0;
}
