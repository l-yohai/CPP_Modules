/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 02:17:55 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/18 05:56:47 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "ScavTrap Success Initiate." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap is died." << std::endl;
	std::cout << "===========================================" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> pick(0, 8);
	int i = pick(gen);

	std::string challenges[9] = {
		"vs 6 zergling",
		"vs 4 zealot",
		"vs 3 vulture",
		"vs 2 tank",
		"vs 1 archon",
		"vs 1 wraith",
		"vs 1 scout",
		"vs 2 mutalisk",
		"vs 1 battle cruiser"
	};
	std::cout << "ScavTrap " << _name << ": " << challenges[i] << std::endl;
}