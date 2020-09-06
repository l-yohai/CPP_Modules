/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 18:00:02 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 18:22:50 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Human is created" << std::endl;
}

Human::~Human(void)
{
	std::cout << "Human is destroyed" << std::endl;
}

const Brain& Human::getBrain() {
	return (_brain);
}

std::string Human::identify() {
	return (_brain.identify());
}