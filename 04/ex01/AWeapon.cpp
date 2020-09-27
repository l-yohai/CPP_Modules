/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:31:41 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/21 09:02:34 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
: _name(name), _apcost(apcost), _damage(damage) {}

AWeapon::~AWeapon() {}

std::string const & AWeapon::getName() const
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