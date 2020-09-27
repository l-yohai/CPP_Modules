/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 07:07:20 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/21 09:10:31 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name)
: _name(name), _ap(40), _weapon(nullptr) {}

Character::Character(const Character & copy)
{
	*this = copy;
}

Character& Character::operator=(const Character & assign)
{
	this->_name = assign._name;
	this->_ap = assign._ap;
	this->_weapon = assign._weapon;
	return (*this);
}

Character::~Character() {}

void Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon * weapon)
{
	this->_weapon = weapon;
}

void Character::attack(Enemy * enemy)
{
	if (!_weapon)
	{
		std::cout << "Not exist Weapon!" << std::endl;
		return ;
	}
	if (!enemy)
	{
		std::cout << "Not exist Enemy!" << std::endl;
	}
	int apcost = _weapon->getAPCost();
	if (this->_ap < apcost)
	{
		std::cout << "Not enough AP!" << std::endl;
		return ;
	}
	this->_ap -= apcost;
	std::cout << this->getName() << " attacks "
			<< enemy->getType() << " with a "
			<< _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

int const & Character::getAP() const
{
	return (this->_ap);
}

std::string Character::getWeapon() const
{
	if (this->_weapon == nullptr)
		return ("");
	return (this->_weapon->getName());
}

std::ostream & operator<<(std::ostream & out, const Character & character)
{
	std::string msg;

	if (character.getWeapon().empty())
	{
		msg = character.getName() + " has "
				+ std::to_string(character.getAP())
				+ " AP and is unarmed\n";
	}
	else
	{
		msg = character.getName() + " has "
				+ std::to_string(character.getAP())
				+ " AP and wields a "
				+ character.getWeapon() + "\n";
	}
	return (out << msg);
}
