/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 17:04:54 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 17:05:18 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
	ZombieHorde a = ZombieHorde(10);
	std::cout <<  "====================================" << std::endl;
	a.announce();
	std::cout <<  "====================================" << std::endl;
}