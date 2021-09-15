/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 14:10:42 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/15 15:45:14 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Form;
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form(void);
		Form(std::string name, int sign, int execute);
		~Form(void);
		Form(Form const &src);
		Form &operator=(Form const &rhs);

		std::string const getName() const;
		int getGradeSign() const;
		int getGradeExecute() const;
		bool getSigned() const;
		void beSigned(Bureaucrat &bureaucrat);
		virtual bool execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
	private:
		std::string const name;
		int const gradeSign;
		int const gradeExecute;
		bool isSigned;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);
#endif
