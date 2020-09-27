/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 05:30:54 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/27 05:44:17 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_source[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource & other)
{
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource & other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._source[i] == nullptr)
			this->_source[i] = nullptr;
		else
			this->_source[i] = other._source[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] != nullptr)
			delete this->_source[i];
	}
}

void MateriaSource::learnMateria(AMateria * m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i] == nullptr)
		{
			this->_source[i] = m;
			return ;
		}
	}
}

AMateria * MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_source[i]->getType() == type)
			return (this->_source[i]->clone());
	}
	return (nullptr);
}