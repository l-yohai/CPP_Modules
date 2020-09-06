/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 16:57:56 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 16:58:07 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name, std::string type)
{
	_name = name;
	_type = type;
}

void	Zombie::announce(void)
{
	std::cout << "<" << _name << " (" <<_type << ")> " <<  "Braiiiiiiinnnssss..." << std::endl;
}