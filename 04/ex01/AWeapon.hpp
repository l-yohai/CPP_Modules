/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 05:41:22 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:34:25 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	private:
		std::string const _name;
		int _apcost;
		int _damage;
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(const AWeapon & copy);
		AWeapon & operator=(const AWeapon & assign);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif