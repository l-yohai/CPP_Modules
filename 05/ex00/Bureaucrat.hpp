/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 17:57:12 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/27 18:06:49 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string const _name;
		unsigned int _grade;
		Bureaucrat();
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat& operator=(const Bureaucrat &);
		~Bureaucrat();

		std::string getName() const;
		unsigned int getGrade() const;

		void increaseGrade();
		void decreaseGrade();

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(const GradeTooHighException &);
				GradeTooHighException& operator=(const GradeTooHighException &);
				~GradeTooHighException() throw();
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{

		};
};

std::ostream & operator<<(std::ostream & out, const Bureaucrat & bur);

#endif