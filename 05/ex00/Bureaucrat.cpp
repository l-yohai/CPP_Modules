/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:31:45 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/28 12:04:33 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & other)
{
	*this = other;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & other)
{
	this->_name = other._name;
	this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::increaseGrade()
{
	this->_grade -= 1;
	if (this->_grade < 1)
	{
		this->_grade = 1;
		throw GradeTooHighException();
	}
}

void Bureaucrat::decreaseGrade()
{
	this->_grade += 1;
	if (this->_grade > 150)
	{
		this->_grade = 150;
		throw GradeTooLowException();
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucrateExcecption: Grade too high.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucrateException: Grade too low.";
}

std::ostream & operator<<(std::ostream & out, const Bureaucrat & bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return (out);
}
