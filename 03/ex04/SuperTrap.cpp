/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 18:43:27 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/18 05:56:35 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() {}

SuperTrap::SuperTrap(std::string name)
: ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5)
{
	std::cout << "SuperTrap has been generated." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap is died." << std::endl;
	std::cout << "===========================================" << std::endl;
}

void SuperTrap::rangedAttack(const std::string & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(const std::string & target)
{
	NinjaTrap::meleeAttack(target);
}