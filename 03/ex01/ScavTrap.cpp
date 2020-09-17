/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 02:17:55 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/17 17:57:00 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : _hit_points(100), _max_hit_points(100),
_energy_points(50), _max_energy_points(50), _level(1), _name(name), _melee_attack_damage(20),
_ranged_attack_damage(15), _armor_damage_reduction(3)
{
	std::cout << _name << " has been generated." << std::endl;
	std::cout << "Success Initiate." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & copy)
{
	std::cout << copy._name << " is copied." << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap & assign)
{
	std::cout << assign._name << " is assigned." << std::endl;
	_hit_points = assign._hit_points;
	_max_hit_points = assign._max_hit_points;
	_energy_points = assign._energy_points;
	_max_energy_points = assign._max_energy_points;
	_level = assign._level;
	_name = assign._name;
	_melee_attack_damage = assign._melee_attack_damage;
	_ranged_attack_damage = assign._ranged_attack_damage;
	_armor_damage_reduction = assign._armor_damage_reduction;
	return (*this);
}

ScavTrap::~ScavTrap() 
{
	std::cout << _name << " is died." << std::endl;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << std::endl;

}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << _name << " attacks " << target << " at range, causing " << _melee_attack_damage << std::endl;

}

void ScavTrap::takeDamage(unsigned int amount)
{
	amount = (amount > _armor_damage_reduction) ? amount - _armor_damage_reduction : 0;
	_hit_points = (amount >= _hit_points) ? 0 : _hit_points - amount;
	std::cout << _name << " damaged " << amount << " points." << std::endl;
	std::cout << "HP: " << _hit_points << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_hit_points = (_hit_points + amount > _max_hit_points) ? _max_hit_points : _hit_points + amount;
	std::cout << _name << " is repaired " << amount << " points." << std::endl;
	std::cout << "HP: " << _hit_points << std::endl;
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
	std::cout << _name << ": " << challenges[i] << std::endl;
}