/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:56:25 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 07:06:00 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(int hp, std::string const &type) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant & copy) : Enemy(copy)
{
	*this = copy;
}

SuperMutant& SuperMutant::operator=(const SuperMutant & assign)
{
	Enemy::operator=(assign);
	return (*this);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	if (damage > 0 && this->_hp >= damage - 3)
	{
		this->_hp -= damage - 3;
	}
}