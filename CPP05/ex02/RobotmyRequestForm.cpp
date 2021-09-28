/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:48:00 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/15 16:43:28 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm() : Form("RobotmyRequestForm", 72, 45), target("")
{
}

RobotmyRequestForm::RobotmyRequestForm(std::string target) :  Form("RobotmyRequestForm", 72, 45), target(target)
{
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const &src)
{
	std::cout << "RobotmyRequestForm Copy constructor called" << std::endl;
	*this = src;
}

RobotmyRequestForm &RobotmyRequestForm::operator=(RobotmyRequestForm const &src)
{
	std::cout << "RobotmyRequestForm Assignation operator called" << std::endl;
	if(this != &src)
		this->target = src.target;
	return *this;
}

RobotmyRequestForm::~RobotmyRequestForm()
{
}

bool RobotmyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw Form::NotSignedException();
	if (this->getGradeExecute() < executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "bip... boop..." << std::endl;
	if (rand() % 100 > 50)
		std::cout << this->target << " has been robotomized successfully." << std::endl;
	else
		std::cout << this->target << " failed to be robotomized." << std::endl;
	return true;
}
