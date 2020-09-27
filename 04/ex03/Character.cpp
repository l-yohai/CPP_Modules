/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 23:29:16 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/27 05:27:26 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(const Character & other)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	*this = other;
}

Character& Character::operator=(const Character & other)
{
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i] == nullptr)
			this->_inventory[i] = nullptr;
		else
			this->_inventory[i] = other._inventory[i]->clone();
	}
	return (*this);
}

Character::~Character() {}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	this->_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	if (this->_inventory[idx] == nullptr)
	{
		std::cout << "Inventory is empty" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}
