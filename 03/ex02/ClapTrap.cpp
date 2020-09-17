/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 02:53:07 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/18 05:32:29 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap(std::string name, unsigned int hit_points,
		unsigned int max_hit_points, unsigned int energy_points,
		unsigned int max_energy_points, unsigned int level,
		unsigned int melee_attack_damage, unsigned int ranged_attack_damage,
		unsigned int armor_damage_reduction) :
	_name(name), _hit_points(hit_points), _max_hit_points(max_hit_points),
	_energy_points(energy_points), _max_energy_points(max_energy_points),
	_level(level), _melee_attack_damage(melee_attack_damage),
	_ranged_attack_damage(ranged_attack_damage), _armor_damage_reduction(armor_damage_reduction)
{
	std::cout << "ClapTrap " << _name << " has been generated." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & copy)
{
	std::cout << copy._name << " is copied." << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap & assign)
{
	std::cout << assign._name << " is assigned." << std::endl;
	this->_hit_points = assign._hit_points;
	this->_max_hit_points = assign._max_hit_points;
	this->_energy_points = assign._energy_points;
	this->_max_energy_points = assign._max_energy_points;
	this->_level = assign._level;
	this->_name = assign._name;
	this->_melee_attack_damage = assign._melee_attack_damage;
	this->_ranged_attack_damage = assign._ranged_attack_damage;
	this->_armor_damage_reduction = assign._armor_damage_reduction;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is died." << std::endl;
	std::cout << "===========================================" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << " at range, causing " << _ranged_attack_damage << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << " at melee, causing " << _melee_attack_damage << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	amount = (amount > _armor_damage_reduction) ? amount - _armor_damage_reduction : 0;
	_hit_points = (amount >= _hit_points) ? 0 : _hit_points - amount;
	std::cout << _name << " damaged " << amount << " points." << std::endl;
	std::cout << "HP: " << _hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hit_points = (_hit_points + amount > _max_hit_points) ? _max_hit_points : _hit_points + amount;
	std::cout << _name << " is repaired " << amount << " points." << std::endl;
	std::cout << "HP: " << _hit_points << std::endl;
}
