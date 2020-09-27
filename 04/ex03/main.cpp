/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 20:18:24 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/27 05:57:33 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* me = new Character("me");

	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	// ICharacter* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);

	// delete bob;
	// delete me;
	// delete src;

	std::cout << "===================================" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");
	AMateria* tmp;

	tmp = src->createMateria("fire");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(-42, *bob);

	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	me->unequip(1);
	me->unequip(1);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	tmp = src->createMateria("ice");
	std::cout<<tmp->getType()<<" xp: "<<tmp->getXP()<<std::endl;

	tmp = src->createMateria("cure");
	std::cout<<tmp->getType()<<" xp: "<<tmp->getXP()<<std::endl;

	tmp = src->createMateria("ice");
	Ice* copy_ice = new Ice(*(Ice *)tmp);

	tmp = src->createMateria("cure");
	Cure* copy_cure = new Cure(*(Cure *)tmp);

	std::cout<<"copy_ice: "<<copy_ice->getType()<<" xp: "<<copy_ice->getXP()<<std::endl;
	std::cout<<"copy_cure: "<<copy_cure->getType()<<" xp: "<<copy_cure->getXP()<<std::endl;

	delete copy_ice;
	delete copy_cure;
	delete bob;
	delete me;
	delete src;

	return 0;
}