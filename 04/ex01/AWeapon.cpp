/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:31:41 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:45:24 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::AWeapon(const AWeapon & copy) : _name(copy.name)
{
	*this = copy;
}

AWeapon& AWeapon::operator=(const AWeapon & assign)
{
	this->_name = assign._name;
	this->_apcost = assign._apcost;
	this->_damage = assign._damage;
	return (*this);
}

AWeapon::~AWeapon()
{

}

std::string AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int AWeapon::getDamage() const
{
	return (this->_damage);
}

void attack() const
{
	
}