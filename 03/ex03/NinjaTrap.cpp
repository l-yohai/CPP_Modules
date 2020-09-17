/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 17:58:46 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/18 05:42:47 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap() {}

NinjaTrap::NinjaTrap(std::string name)
: ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "Ninja thought 'I'm so strong.', but he was so weak." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap is died" << std::endl;
	std::cout << "===========================================" << std::endl;

}

void NinjaTrap::ninjaShoebox(FragTrap& target)
{
	std::cout << "Ninja swored " << target.getName() << "'s sister!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& target)
{
	std::cout << "Ninja swored " << target.getName() << "'s brother!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& target)
{
	std::cout << "Ninja swored " << target.getName() << "'s parents!" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap& target)
{
	std::cout << "Ninja swored " << target.getName() << "'s myself!" << std::endl;
}