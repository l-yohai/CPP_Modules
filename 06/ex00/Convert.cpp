/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 04:17:11 by yohlee            #+#    #+#             */
/*   Updated: 2020/10/01 04:53:07 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(const char * input)
{
	char *pos;

	_error = false;
	_conv = std::strtod(input, &pos);
	check(input, pos);
}

Convert::Convert(const Convert & other)
{
	*this = other;
}

Convert & Convert::operator=(const Convert & other)
{
	_error = other._error;
	_conv = other._conv;
	return (*this);
}

Convert::~Convert() {}

void Convert::check(const char * input, char * pos)
{

	if (strlen(input) == 1 && !isdigit(input[0]))
	{
		_conv = static_cast<double>(input[0]);
		return ;
	}
	if (input == pos)
		_error = true;
}

void Convert::toChar() const
{
	std::cout << "char: ";

	if (_conv < CHAR_MIN || _conv > CHAR_MAX || _error
		|| std::isnan(_conv) || std::isinf(_conv))
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(_conv))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(_conv) << "'" << std::endl;
}

void Convert::toInt() const
{
	std::cout << "int: ";
	if (_conv < INT_MIN || _conv > INT_MAX || _error
		|| std::isnan(_conv) || std::isinf(_conv))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(_conv) << std::endl;
}

void Convert::toFloat() const
{
	std::cout << "float: ";
	if (_error)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(_conv) << "f" << std::endl;
}

void Convert::toDouble() const
{
	std::cout << "double: ";
	if (_error)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << _conv << std::endl;
}