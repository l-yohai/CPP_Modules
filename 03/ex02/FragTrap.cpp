/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 00:27:20 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/18 05:33:22 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {}

FragTrap::FragTrap(std::string name)
: ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "FragTrap Success Initiate." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " is died." << std::endl;
	std::cout << "===========================================" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (_energy_points < 25)
		std::cout << "Not enough energy!" << std::endl;
	else
	{
		_energy_points -= 25;

		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<int> pick(0, 4);
		int i = pick(gen);

		std::string attack[5] = {
			"break wind",
			"step on foot",
			"tickle the armpit",
			"poke eye",
			"neck slice"
		};

		int damage[5] = {20, 30, 40, 50, 80};

		std::cout << "FragTrap " << _name << " attacks " << target << " by " << attack[i] << ", causing " << damage[i] << " points." << std::endl;
		std::cout << "EP: " << _energy_points << std::endl;
	}
}