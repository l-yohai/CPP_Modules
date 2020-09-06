/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 14:51:27 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 16:50:36 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return	(new Zombie(name, _type));
}

void	ZombieEvent::randomChump(void)
{
	std::string	names[4] = {"a", "b", "c", "d"};

	Zombie	new_zombie = Zombie(names[rand() % 4], _type);
	new_zombie.announce();
}
