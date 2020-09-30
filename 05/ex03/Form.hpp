/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:05:35 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 02:05:12 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const _name;
		bool _isSigned;
		int const _gradeRequiredToSign;
		int const _gradeRequiredToExcute;

	public:
		Form(std::string const name, int const gradeRequiredToSign, int const gradeRequiredToExcute);
		Form(const Form &);
		Form& operator=(const Form &);
		~Form();

	std::string getName() const;
	bool getIsSigned() const;
	int getGradeRequiredToSign() const;
	int getGradeRequiredToExcute() const;

	void beSigned(const Bureaucrat &);
	void execute(Bureaucrat const & exec) const;

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};

	class AlreadySignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream & operator<<(std::ostream & out, const Form & form);

#endif