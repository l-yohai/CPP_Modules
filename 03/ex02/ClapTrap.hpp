/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 02:47:28 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/17 18:20:42 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <random>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hit_points;
		unsigned int _max_hit_points;
		unsigned int _energy_points;
		unsigned int _max_energy_points;
	private:
		unsigned int _level;
		unsigned int _melee_attack_damage;
		unsigned int _ranged_attack_damage;
		unsigned int _armor_damage_reduction;
	public:
		ClapTrap(void);
		ClapTrap(std::string name,
		unsigned int hit_points, unsigned int max_hit_points,
		unsigned int energy_points, unsigned int max_energy_points,
		unsigned int level, unsigned int melee_attack_damage,
		unsigned int ranged_attack_damage, unsigned int armor_damage_reduction);
		ClapTrap(const ClapTrap & copy);
		ClapTrap& operator=(const ClapTrap & assign);
		~ClapTrap(void);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif