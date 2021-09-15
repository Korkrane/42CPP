/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:48:00 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/15 15:49:20 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include "Form.hpp"
#include <random>

class RobotmyRequestForm : public Form
{
	public:
		RobotmyRequestForm(void);
		RobotmyRequestForm(std::string target);
		~RobotmyRequestForm(void);
		RobotmyRequestForm(RobotmyRequestForm const &src);
		RobotmyRequestForm &operator=(RobotmyRequestForm const &rhs);
		virtual bool execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};

#endif
