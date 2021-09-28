/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:57:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 19:52:44 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "Intern.hpp"

void testIntern(std::string const &name, std::string const &target)
{
	Intern intern;
	Form *newForm;
	Bureaucrat bureaucrat("bureaucrat", 60);

	newForm = intern.makeForm(name, target);
	if (newForm)
	{
		try
		{
			std::cout << bureaucrat;
			bureaucrat.signForm(*newForm);
			std::cout << *newForm << std::endl;
			bureaucrat.executeForm(*newForm);
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << std::endl;
        delete newForm;
	}
}
int main()
{
	std::cout << "--- Intern ---" << std::endl;
	testIntern("shrubbery request", "test1");
	testIntern("presidential pardon request", "test2");
	testIntern("robotmy request", "test3");
	testIntern("unknown request", "test4");
}
