/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 06:45:32 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/16 19:15:32 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const fixed)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = fixed << this->bits;
}

Fixed::Fixed(float const fixed)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(fixed * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed& assign)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = assign.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	float ret;

	ret = (float)this->value / (float)(1 << bits);
	return (ret);
}

int Fixed::toInt(void) const
{
	int ret;

	ret = roundf(this->value >> this->bits);
	return (ret);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}