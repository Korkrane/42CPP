/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:57:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/29 12:26:23 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"

void testShrubbery(std::string const &bureaucratName, int grade, std::string const &target)
{
	try
	{
		std::cout << "---" << bureaucratName << "'s test" << "---" << std::endl;
		Bureaucrat bureaucrat(bureaucratName, grade);
		ShrubberyCreationForm form(target);

		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void testPresidential(std::string const &bureaucratName, int grade, std::string const &target)
{
	try
	{
		std::cout << "---" << bureaucratName << "'s test" << "---" << std::endl;

		Bureaucrat bureaucrat(bureaucratName, grade);
		PresidentialPardonForm form(target);

		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void testRobot(std::string const &bureaucratName, int grade, std::string const &target)
{
	try
	{
		std::cout << "---" << bureaucratName << "'s test" << "---" << std::endl;

		Bureaucrat bureaucrat(bureaucratName, grade);
		RobotmyRequestForm form(target);

		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		form.execute(bureaucrat);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void testBureaucrat(std::string const &bureaucratName, int grade, std::string const &target)
{

	std::cout << "---" << bureaucratName << "'s test" << "---" << std::endl;

	Bureaucrat bureaucrat(bureaucratName, grade);
	ShrubberyCreationForm shrubbery(target);
	RobotmyRequestForm robotomy(target);
	PresidentialPardonForm presidential(target);

	try
	{
		bureaucrat.signForm(shrubbery);
		bureaucrat.executeForm(shrubbery);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
	try
	{
		bureaucrat.signForm(robotomy);
		bureaucrat.executeForm(robotomy);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
	try
	{
		bureaucrat.signForm(presidential);
		bureaucrat.executeForm(presidential);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		std::cout << std::endl;
	}
}

int main()
{
	std::cout << "--- ShrubberyCreation ---" << std::endl;
	testShrubbery("bureaucrat1", 1, "test1");
	testShrubbery("bureaucrat2", 150, "test2");
	testShrubbery("bureaucrat3", 8, "test3");
	testShrubbery("bureaucrat4", -42, "test4");
	testShrubbery("bureaucrat5", 146, "test5");

	std::cout << "--- PresidentialPardon ---" << std::endl;
	testPresidential("bureaucrat6", 1, "test6");
	testPresidential("bureaucrat7", 150, "test7");
	testPresidential("bureaucrat8", 20, "test8");
	testPresidential("bureaucrat9", -42, "test9");
	testPresidential("bureaucrat10", 5, "test10");

	std::cout << "--- RobotmyRequest ---" << std::endl;
	testRobot("bureaucrat11", 1, "test11");
	testRobot("bureaucrat12", 150, "test12");
	testRobot("bureaucrat13", 60, "test13");
	testRobot("bureaucrat14", -42, "test14");
	testRobot("bureaucrat15", 45, "test15");

	std::cout << "--- Bureaucrat ---" << std::endl;
	testBureaucrat("bureaucrat16", 1, "test16");
	testBureaucrat("bureaucrat17", 150, "test17");
	testBureaucrat("bureaucrat18", 60, "test18");
	testBureaucrat("bureaucrat19", 45, "test19");
	testBureaucrat("bureaucrat20", 140, "test20");
}
