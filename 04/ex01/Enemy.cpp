/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:49:54 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:54:44 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{

}

Enemy::Enemy(const Enemy & copy)
{
	*this = copy;
}

Enemy& Enemy::operator=(const Enemy & assign)
{
	this->_hp = assign._hp;
	this->_type = assign._type;
	return (*this);
}

Enemy::~Enemy()
{

}

std::string Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_hp);
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0 && this->_hp >= damage)
	{
		this->_hp -= damage;
	}
}