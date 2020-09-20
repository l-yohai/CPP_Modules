/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:33:24 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:45:45 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & copy) : AWeapon(copy)
{
	*this = copy;
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle & assign)
{
	AWeapon::operator=(assign);
	return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
	
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}