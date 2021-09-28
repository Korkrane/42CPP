/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:23 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/28 19:26:03 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *makeRobotmyForm(std::string const &target)
{
	return (new RobotmyRequestForm(target));
}

Form *makePresidentialForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form *makeShrubberyForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern()
{
	forms[0].name = "robotmy request";
	forms[0].fct = makeRobotmyForm;
	forms[1].name = "presidential pardon request";
	forms[1].fct = makePresidentialForm;
	forms[2].name = "shrubbery request";
	forms[2].fct = makeShrubberyForm;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern &Intern::operator=(Intern const &src)
{
	std::cout << "Intern Assignation operator called" << std::endl;
    (void)src;
	return *this;
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if(name == this->forms[i].name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->forms[i].fct(target));
		}
	}
	std::cout << "Intern doesn't know the form " << name << std::endl;
	return (NULL);
}
