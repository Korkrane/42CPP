/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:48:00 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/29 12:10:27 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotmyRequestForm : public Form
{
	public:
		RobotmyRequestForm(void);
		RobotmyRequestForm(std::string target);
		virtual ~RobotmyRequestForm(void);
		RobotmyRequestForm(RobotmyRequestForm const &src);
		RobotmyRequestForm &operator=(RobotmyRequestForm const &src);
		virtual bool execute(Bureaucrat const &executor) const;
	private:
		std::string target;
};

#endif
