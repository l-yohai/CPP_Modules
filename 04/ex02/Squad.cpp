/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 10:34:01 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/21 14:31:31 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : _count(0), _unit(nullptr) {}

Squad::Squad(const Squad & copy)
{
	*this = copy;
}

Squad& Squad::operator=(const Squad & assign)
{
	deleteSquad();
	this->_count = assign._count;
	this->_unit = new ISpaceMarine*[_count];
	for (int i = 0; i < _count; i++)
		_unit[i] = assign._unit[i]->clone();
	return (*this);
}

Squad::~Squad()
{
	deleteSquad();
}

int Squad::getCount() const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int num) const
{
	if (_count == 0 || num < 0 || num >= this->_count)
	{
		std::cout << "out of index" << std::endl;
		return (nullptr);
	}
	return (_unit[num]);
}

int Squad::push(ISpaceMarine* new_marine)
{
	ISpaceMarine** tmp;

	if (!new_marine)
		return (_count);
	for (int i = 0; i < _count; i++)
		if (_unit[i] == new_marine)
			return (_count);

	tmp = new ISpaceMarine*[_count + 1];
	for (int i = 0; i < _count; i++)
		tmp[i] = _unit[i];
	tmp[_count] = new_marine;
	if (_unit)
		delete[] _unit;
	_unit = tmp;
	return (++_count);
}

void Squad::deleteSquad()
{
	if (_count > 0)
	{
		for (int i = 0; i < _count; i++)
			delete _unit[i];
		delete[] _unit;
	}
}