/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 00:27:20 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/18 05:28:20 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {}

FragTrap::FragTrap(std::string name) : _hit_points(100), _max_hit_points(100),
_energy_points(100), _max_energy_points(100), _level(1), _name(name), _melee_attack_damage(30),
_ranged_attack_damage(20), _armor_damage_reduction(5)
{
	std::cout << "FragTrap " << _name << " has been generated." << std::endl;
	std::cout << "Success Initiate." << std::endl;
}

FragTrap::FragTrap(const FragTrap & copy)
{
	std::cout << copy._name << " is copied." << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap & assign)
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap" << _name << " is died." << std::endl;
	std::cout << "===========================================" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FragTrap " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FragTrap " << _name << " attacks " << target << " at melee, causing " << _melee_attack_damage << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	amount = (amount > _armor_damage_reduction) ? amount - _armor_damage_reduction : 0;
	_hit_points = (amount >= _hit_points) ? 0 : _hit_points - amount;
	std::cout << _name << " damaged " << amount << " points." << std::endl;
	std::cout << "HP: " << _hit_points << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	_hit_points = (_hit_points + amount > _max_hit_points) ? _max_hit_points : _hit_points + amount;
	std::cout << _name << " is repaired " << amount << " points." << std::endl;
	std::cout << "HP: " << _hit_points << std::endl;
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