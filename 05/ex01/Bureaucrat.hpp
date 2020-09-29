/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:57:12 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/28 16:25:46 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Form;

class Bureaucrat
{
	private:
		std::string _name;
		int _grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat& operator=(const Bureaucrat &);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;

		void increaseGrade();
		void decreaseGrade();

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

		void signForm(Form & form);
};

std::ostream & operator<<(std::ostream & out, const Bureaucrat & bur);

#endif