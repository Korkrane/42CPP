/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:01:23 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/29 12:10:11 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"

class Intern
{
	public:
		Intern(void);
		virtual ~Intern(void);
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);
		Form *makeForm(std::string formName, std::string target);
	private:
		typedef struct	s_form
		{
			std::string name;
			Form		*(*fct)(std::string const &target);
		}				t_form;
		t_form forms[3];
};

#endif
