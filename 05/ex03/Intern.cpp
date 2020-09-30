/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 02:34:17 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 02:51:22 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern & other)
{
	(void)other;
}

Intern & Intern::operator=(const Intern & other)
{
	(void)other;
	return (*this);
}

Intern::~Intern() {}

Form* Intern::makeForm(const std::string name, const std::string target)
{
	std::string form[3] = {
		"Shrubbery creation",
		"Robotomy request",
		"Presidential pardon"
	};

	Form* (Intern::*fun[3])(std::string) = {
		&Intern::createShrubberyCreation,
		&Intern::createRobotomyRequest,
		&Intern::createPresidentialPardon
	};

	for (int i = 0; i < 3; i++)
	{
		if (name == form[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*fun[i])(target));
		}
	}

	std::cout << name << " doesn't exist." << std::endl;
	return (nullptr);
}

Form* Intern::createRobotomyRequest(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form* Intern::createShrubberyCreation(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form* Intern::createPresidentialPardon(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

