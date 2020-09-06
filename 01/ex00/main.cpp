/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 12:11:14 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 14:42:17 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	main(void)
{
	std::cout << "============HEAP============" << std::endl;
	Pony::ponyOnTheHeap("pony", "Seoul", 10, 50);
	std::cout << "============================" << std::endl << std::endl;

	std::cout << "============STACK===========" << std::endl;
	Pony::ponyOnTheStack("pony", "Seoul", 10, 50);
	std::cout << "============================" << std::endl << std::endl;

	return (0);
}
