/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 06:39:33 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/19 06:46:03 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon("Power Fist", 8, 50)
{
	
}

PowerFist::PowerFist(const PowerFist & copy) : AWeapon(copy)
{
	*this = copy;
}

PowerFist& PowerFist::operator=(const PowerFist & assign)
{
	AWeapon::operator=(assign);
	return (*this);
}

PowerFist::~PowerFist()
{

}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}