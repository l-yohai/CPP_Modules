/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 23:12:00 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/27 05:46:41 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(const AMateria & other)
{
	*this = other;
}

AMateria & AMateria::operator=(const AMateria& other)
{
	this->_type = other._type;
	this->_xp = other._xp;
	return (*this);
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}