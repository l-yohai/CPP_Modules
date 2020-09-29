/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:05:39 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/28 16:17:35 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const gradeRequiredToSign, int const gradeRequiredToExcute)
: _name(name), _isSigned(false), _gradeRequiredToSign(gradeRequiredToSign), _gradeRequiredToExcute(gradeRequiredToExcute)
{
	if (this->_gradeRequiredToSign < 1 || this->_gradeRequiredToExcute < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeRequiredToSign > 150 || this->_gradeRequiredToExcute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form & other)
: _name(other._name), _isSigned(other._isSigned), _gradeRequiredToSign(other._gradeRequiredToSign), _gradeRequiredToExcute(other._gradeRequiredToExcute)
{
	*this = other;
}

Form & Form::operator=(const Form & other)
{
	this->_isSigned = other._isSigned;
	return (*this);
}

Form::~Form() {}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getIsSigned() const
{
	return (this->_isSigned);
}

int Form::getGradeRequiredToSign() const
{
	return (this->_gradeRequiredToSign);
}

int Form::getGradeRequiredToExcute() const
{
	return (this->_gradeRequiredToExcute);
}

void Form::beSigned(const Bureaucrat & b)
{
	if (b.getGrade() > this->_gradeRequiredToSign)
		throw Form::GradeTooLowException();
	if (this->_isSigned == true)
		throw Form::AlreadySignedException();
	this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too high.";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too low.";
}

const char *Form::AlreadySignedException::what() const throw()
{
	return "FormException: Already signed.";
}

std::ostream & operator<<(std::ostream & out, const Form & form)
{
	out << "- NAME                     : " << form.getName() << "\n";
	out << "- is signed                : " << form.getIsSigned() << "\n";
	out << "- Grade required to sign   : " << form.getGradeRequiredToSign() << "\n";
	out << "- Grade required to excute : " << form.getGradeRequiredToExcute() << std::endl;
	return (out);
}