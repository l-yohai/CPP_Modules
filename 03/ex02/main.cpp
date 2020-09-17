/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 02:03:39 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/17 02:44:45 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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

	std::cout << std::endl << "New Challenge!" << std::endl;

	ScavTrap goliath("Goliath");
	target = "Dragoon & Hydralisk";

	std::cout << "Dragoon & Hydralisk attacked goliath." << std::endl;
	goliath.takeDamage(20);
	goliath.takeDamage(20);
	goliath.takeDamage(20);

	std::cout << "Goliath is repaired." << std::endl;
	goliath.beRepaired(3);
	goliath.beRepaired(3);
	goliath.beRepaired(3);
	goliath.beRepaired(3);
	goliath.beRepaired(3);

	goliath.meleeAttack(target);

	std::cout << "Dragoon & Hydralisk attacked goliath." << std::endl;
	goliath.takeDamage(20);
	goliath.takeDamage(20);
	goliath.takeDamage(20);

	goliath.challengeNewcomer();
	goliath.challengeNewcomer();

	std::cout << "Hydralisk is died." << std::endl;
}