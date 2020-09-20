/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:29:59 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:44:15 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(std::string const & name, int apcost, int damage);
		PlasmaRifle(const PlasmaRifle & copy);
		PlasmaRifle& operator=(const PlasmaRifle & assign);
		~PlasmaRifle(void);
		virtual void attack() const = 0;
};

#endif