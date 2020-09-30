/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:57:01 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 02:51:39 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern intern;
	std::string names[5] =	{
							"Shrubbery creation",
							"Robotomy request",
							"Presidential pardon",
							"abcde",
							"hello, My name is Intern."
							};

	Form* temp = nullptr;

	for (int i = 0; i < 5; i++)
	{
		temp = intern.makeForm(names[i], "test");
		if (temp != nullptr)
		{
			std::cout << temp->getName();
			temp = 0;
		}
	}
}