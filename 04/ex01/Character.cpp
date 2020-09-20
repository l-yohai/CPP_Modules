/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 07:07:20 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 07:24:59 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	_ap = 40;
}

Character::Character(const Character & copy)
{
	_name = copy._name;
	_ap = copy._ap;
	*this = copy;
}

Character& Character::operator=(const Character & assign)
{
	this->_name = assign._name;
	this->_ap = assign._ap;
	return (*this);
}

Character::~Character()
{
	
}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap >= 40)
		_ap = 40;
}

void Character::equip(AWeapon * weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy * enemy)
{
	std::cout << _name << " attacks "
			<< enemy->getType() << " with a "
			<< _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete []enemy;
}

std::string Character::getName() const
{
	return (this->_name);
}

std::string Character::display() const
{
	std::string msg;

	if ()
		msg = _name + " has " + _weapon->getAPCost() + _ap
				+ " and wields a " + _weapon->getName() + "\n";
	else:
	{
		msg = _name + " has " + _weapon->getAPCost() + _ap
				+ " and is unarmed\n";
	}
	return (msg);
}

std::ostream & operator<<(std::ostream & out, const Character & character)
{
	return (out << character.display());
}
