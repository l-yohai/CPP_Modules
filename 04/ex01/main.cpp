/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 07:25:13 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/21 09:55:34 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;


	// Character* marine = new Character("Marine");
	// std::cout << *marine;

	// Enemy* sm = new SuperMutant();

	// marine->attack(sm);

	// AWeapon* fist = new PowerFist();
	// marine->equip(fist);
	// std::cout << *marine;
	// std::cout << "Marine's equip: " << marine->getWeapon() << std::endl;
	// std::cout << "Mutant's HP: " << std::to_string(sm->getHP()) << std::endl;

	// std::cout << std::endl << "Marine's Attack" << std::endl;
	// marine->attack(sm);

	// std::cout << "Mutant's HP: " << std::to_string(sm->getHP()) << std::endl;
	// std::cout << "Marine's AP: " << std::to_string(marine->getAP()) << std::endl;

	// std::cout << std::endl << "Marine's Attack" << std::endl;
	// marine->attack(sm);
	// std::cout << "Mutant's HP: " << std::to_string(sm->getHP()) << std::endl;
	// std::cout << "Marine's AP: " << std::to_string(marine->getAP()) << std::endl;


	return 0;
}