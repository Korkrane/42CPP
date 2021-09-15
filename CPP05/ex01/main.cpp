/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:57:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/09 14:22:38 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test1()
{
	std::cout << "--- test1 ---" << std::endl;
	Bureaucrat bureaucrat1("bureaucrat1", 42);
	std::cout << bureaucrat1 << std::endl;
	bureaucrat1.incrementGrade();
	std::cout << bureaucrat1 << std::endl;
	bureaucrat1.decrementGrade();
	std::cout << bureaucrat1 << std::endl;
}

void test2()
{
	std::cout << "--- test2 ---" << std::endl;
	try
	{
		Bureaucrat bureaucrat2("bureaucrat2", -42);
		std::cout << bureaucrat2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test3()
{
	std::cout << "--- test3 ---" << std::endl;
	try
	{
		Bureaucrat bureaucrat3("bureaucrat3", 1);
		std::cout << bureaucrat3 << std::endl;
		bureaucrat3.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test4()
{
	std::cout << "--- test4 ---" << std::endl;
	try
	{
		Bureaucrat bureaucrat4("bureaucrat4", 2147483647);
		std::cout << bureaucrat4 << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void test5()
{
	std::cout << "--- test5 ---" << std::endl;
	try
	{
		Bureaucrat bureaucrat5("bureaucrat5", 150);
		std::cout << bureaucrat5 << std::endl;
		bureaucrat5.decrementGrade();
		std::cout << bureaucrat5 << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Exception should have been catch before" << std::endl;
	}
}

int main()
{
	test1();
	test2();
	test3();
	test4();
	test5();
}
