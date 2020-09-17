/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 02:03:39 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/17 02:13:18 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap dragoon("Dragoon");
	std::string target = "marine";

	dragoon.rangedAttack(target);

	std::cout << "Marine attacked dragoon." << std::endl;
	dragoon.takeDamage(8);
	dragoon.takeDamage(8);
	dragoon.takeDamage(8);

	std::cout << "Dragoon's shield is repaired." << std::endl;
	dragoon.beRepaired(2);
	dragoon.beRepaired(2);
	dragoon.beRepaired(2);
	dragoon.beRepaired(2);
	dragoon.beRepaired(2);

	dragoon.meleeAttack(target);

	std::cout << "Marine attacked dragoon." << std::endl;
	dragoon.takeDamage(8);
	dragoon.takeDamage(8);
	dragoon.takeDamage(8);

	std::cout << "Dragoon use lethal force!" << std::endl;
	dragoon.vaulthunter_dot_exe(target);
	dragoon.vaulthunter_dot_exe(target);
	dragoon.vaulthunter_dot_exe(target);

	std::cout << "Marine is died." << std::endl;

	std::cout << "Nuclear launch detected." << std::endl;
}