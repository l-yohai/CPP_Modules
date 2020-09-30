/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 02:34:08 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 02:46:55 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &);
		Intern& operator=(const Intern &);
		~Intern();

		Form* makeForm(const std::string name, const std::string target);
		Form* createRobotomyRequest(const std::string target);
		Form* createShrubberyCreation(const std::string target);
		Form* createPresidentialPardon(const std::string target);
};

#endif