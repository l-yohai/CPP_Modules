/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 01:35:22 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 01:56:57 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("Shrubbery", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & other)
: Form("Shrubbery", 145, 137)
{
	_target = other._target;
	*this = other;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & other)
{
	if (this != &other)
		_target = other._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::action() const
{
	std::ofstream file;

	file.open(this->_target + "_shrubbery", std::ios::out | std::ios::app);
	if (file.is_open())
	{
		file << "        42\n";
		file << "       4242\n";
		file << "      424242\n";
		file << "     42424242\n";
		file << "    4242424242\n";
		file << "   424242424242\n";
		file << "  42424242424242\n";
		file << " 4242424242424242\n";
		file << "424242424242424242\n";
		file << "        42\n";
		file << "        42\n";
		file << "        42\n";
	}
}