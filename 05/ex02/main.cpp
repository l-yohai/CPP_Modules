/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:57:01 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 02:33:29 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	Bureaucrat shrubbery("s1", 3);
	Bureaucrat robotomy("r1", 78);
	Bureaucrat presidential("p1", 130);

	std::cout << shrubbery << std::endl;
	std::cout << robotomy << std::endl;
	std::cout << presidential << std::endl;

	std::cout << std::endl << "========================" << std::endl;

	Form *tmp;
	tmp = new ShrubberyCreationForm("shru_test");
	shrubbery.signForm(*tmp);
	shrubbery.executeForm(*tmp);

	robotomy.signForm(*tmp);
	robotomy.executeForm(*tmp);

	// delete tmp;

	std::cout << std::endl << "========================" << std::endl;

	Form *tmp2;
	tmp2 = new RobotomyRequestForm("robo_test");
	robotomy.signForm(*tmp2);
	robotomy.executeForm(*tmp2);

	presidential.signForm(*tmp2);
	presidential.executeForm(*tmp2);

	// delete tmp2;

	std::cout << std::endl << "========================" << std::endl;

	Form *tmp3;
	tmp3 = new PresidentialPardonForm("pres_test");

	presidential.signForm(*tmp3);
	presidential.executeForm(*tmp3);

	shrubbery.signForm(*tmp3);
	shrubbery.executeForm(*tmp3);

	// delete tmp3;

	return (0);
}