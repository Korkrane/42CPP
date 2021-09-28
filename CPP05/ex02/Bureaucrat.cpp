/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:10:43 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/15 16:51:02 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	if (src.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (src.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	std::cout << "Bureaucrat Assignation operator called" << std::endl;
	if(this != &src)
	{
		if (src.grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (src.grade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->grade = src.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::incrementGrade()
{
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= 1;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += 1;
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Bureaucrat's grade too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Bureaucrat's grade too Low");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
	o << "<" << bureaucrat.getName() << ">" << ", bureaucrat grade : " << bureaucrat.getGrade() << ".";
	return o;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSigned())
	{
		std::cout << "<" << form.getName() << ">" << " is already signed." << std::endl;
		return;
	}
	else if (this->grade > form.getGradeSign())
	{
		std::cout <<  "<" <<this->name << ">" << " cannot sign " << "<" << form.getName() << ">" << " because his grade is too low." << std::endl;
		return;
	}
	else
	{
		std::cout << "<" << this->name << ">" << " signs " <<  "<" << form.getName() << ">" << std::endl;
		form.beSigned(*this);
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	if (form.execute(*this))
		std::cout << "<" << this->name << ">" << " executes " << "<" << form.getName() << ">" << std::endl;
	else
		std::cout << "<" << this->name << ">" << " failed to execute " << "<" << form.getName() << ">" << std::endl;
}
