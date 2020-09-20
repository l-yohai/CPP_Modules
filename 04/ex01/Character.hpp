/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 07:06:24 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 07:21:18 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "Enemy.hpp"
# include "AWeapon.hpp"

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon * _weapon;
	public:
		Character(std::string const &name);
		Character(const Character & copy);
		Character& operator=(const Character & assign);
		~Character(void);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		std::string display() const;
};

std::ostream & operator<<(std::ostream & out, const Character & character);

#endif