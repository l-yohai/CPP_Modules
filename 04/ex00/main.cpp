/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 06:06:35 by yohlee            #+#    #+#             */
/*   Updated: 2020/09/21 09:57:28 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);


	// Sorcerer yohlee("Yohlee", "42 Student");
	// Victim A("Vic1");
	// Victim B("Vic2");

	// std::cout << B << A << yohlee;

	// yohlee.polymorph(B);
	// yohlee.polymorph(A);

	return 0;
}