/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:57:39 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/15 15:18:08 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test(std::string const &bureaucratName, std::string const &formName,
		int grade, int gradeExecute, int gradeSign)
{
	try
	{
		std::cout << "---" << bureaucratName << "'s test" << "---" << std::endl;

		Bureaucrat bureaucrat(bureaucratName, grade);
		Form form(formName, gradeSign, gradeExecute);
		std::cout << bureaucrat << std::endl;
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
		if(bureaucratName == "bureaucrat1")
		{
			std::cout << "<bureaucrat1> tries to resign <form1>" << std::endl;
			bureaucrat.signForm(form);
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main()
{
	std::string bureaucratName[9] = {"bureaucrat1","bureaucrat2","bureaucrat3","bureaucrat4",
	"bureaucrat5","bureaucrat6","bureaucrat7","bureaucrat8","bureaucrat9"};

	std::string formName[9] = {"form1","form2","form3","form4",
	"form5","form6","form7","form8","form9"};

	int grade[9] = {1, 42, 42, 42 , 1 ,42, 151, -42, 42};
	int gradeExecute[9] = {42, 1, -42, 1, 1, 151, 151, 151, -42};
	int gradeSign[9] = {42, 1, -42, 151, 1, 151, 151, -42};

	for(int i = 0; i < 9; i++)
		test(bureaucratName[i], formName[i], grade[i], gradeExecute[i], gradeSign[i]);
}
