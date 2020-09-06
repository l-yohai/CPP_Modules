/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 15:05:03 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 16:55:10 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	event;

	srand(time(NULL));
	std::cout << "====Type: angry====" << std::endl;
	event.setZombieType("angry");
	event.randomChump();

	Zombie*	e = event.newZombie("e");
	Zombie*	f = event.newZombie("f");
	e->announce();
	f->announce();
	std::cout << "================" << std::endl;

	std::cout << std::endl << "====Type: happy====" << std::endl;
	event.setZombieType("happy");
	event.randomChump();

	Zombie*	g = event.newZombie("g");
	Zombie*	h = event.newZombie("h");
	g->announce();
	h->announce();
	std::cout << "================" << std::endl;

	std::cout << std::endl << "====Type: fear====" << std::endl;
	event.setZombieType("fear");
	event.randomChump();

	Zombie*	i = event.newZombie("i");
	i->announce();
	Zombie*	j = event.newZombie("j");
	j->announce();
	std::cout << "================" << std::endl << std::endl;

	delete e;
	delete f;
	delete g;
	delete h;
	delete i;
	delete j;
}