/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:59:46 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 17:54:14 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	zombies = new Zombie[n];
	len = n;

	std::string name[5] = {"a", "b", "c", "d", "e"};

	for (int i = 0; i < len; i++)
		zombies[i] = Zombie(name[rand() % 5], "more_brainz");
}

ZombieHorde::~ZombieHorde() {
	delete[] zombies;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < len; i++)
		zombies[i].announce();
}