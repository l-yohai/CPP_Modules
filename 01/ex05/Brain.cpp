/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohlee <yohlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 17:59:38 by yohlee            #+#    #+#             */
/*   Updated: 2020/08/23 18:20:50 by yohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain is created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain is destroyed" << std::endl;
}

const std::string	Brain::identify(void) const
{
	std::ostringstream	oss;

	oss << this;
	return (oss.str());
}